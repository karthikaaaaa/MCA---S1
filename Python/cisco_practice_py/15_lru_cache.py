class LRUCache:
    class Node:
        __slots__ = ("key","val","prev","next")
        def __init__(self, key=None, val=None):
            self.key = key
            self.val = val
            self.prev = None
            self.next = None

    def __init__(self, capacity: int):
        self.cap = capacity
        self.map = {}
        self.head = self.Node()
        self.tail = self.Node()
        self.head.next = self.tail
        self.tail.prev = self.head

    def _add_front(self, node):
        node.prev = self.head
        node.next = self.head.next
        self.head.next.prev = node
        self.head.next = node

    def _remove(self, node):
        p, n = node.prev, node.next
        p.next = n
        n.prev = p

    def _move_to_front(self, node):
        self._remove(node)
        self._add_front(node)

    def get(self, key: int) -> int:
        if key not in self.map:
            return -1
        node = self.map[key]
        self._move_to_front(node)
        return node.val

    def put(self, key: int, value: int) -> None:
        if key in self.map:
            node = self.map[key]
            node.val = value
            self._move_to_front(node)
            return
        node = self.Node(key, value)
        self.map[key] = node
        self._add_front(node)
        if len(self.map) > self.cap:
            lru = self.tail.prev
            self._remove(lru)
            del self.map[lru.key]

if __name__ == "__main__":
    # simple interactive demo:
    # first line: capacity
    # then lines: commands: "put k v" or "get k" ; empty line to stop
    cap = int(input().strip())
    cache = LRUCache(cap)
    try:
        while True:
            line = input().strip()
            if not line:
                break
            parts = line.split()
            if parts[0] == "put":
                k, v = map(int, parts[1:3])
                cache.put(k, v)
                print("OK")
            elif parts[0] == "get":
                k = int(parts[1])
                print(cache.get(k))
    except EOFError:
        pass
