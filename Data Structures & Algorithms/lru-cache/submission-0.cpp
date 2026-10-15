class LRUCache {
public:
    int capacity;
    list<pair<int, int>> cache;
    unordered_map<int, list<pair<int, int>>::iterator> um;

    LRUCache(int capacity) {
        this->capacity = capacity;
    }

    int get(int key) {
        if (um.find(key) == um.end()) {
            return -1;
        }

        cache.splice(cache.begin(), cache, um[key]);

        return um[key]->second;
    }

    void put(int key, int value) {
        if (um.find(key) != um.end()) {
            um[key]->second = value;
            cache.splice(cache.begin(), cache, um[key]);
            return;
        }

        if (cache.size() == capacity) {
            int oldKey = cache.back().first;
            um.erase(oldKey);
            cache.pop_back();
        }

        cache.push_front({key, value});
        um[key] = cache.begin();
    }
};