/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3QueryResultSet_BackingStore : NSObject  {
    struct vector<long long, std::allocator<long long> > { 
        struct _Vector_impl { 
            long long *_M_start; 
            long long *_M_finish; 
            long long *_M_end_of_storage; 
        } _M_impl; 
    } _persistentIDs;
    struct vector<unsigned char, std::allocator<unsigned char> > { 
        struct _Vector_impl { 
            char *_M_start; 
            char *_M_finish; 
            char *_M_end_of_storage; 
        } _M_impl; 
    } _sections;
}

@property(readonly) unsigned int count;


- (id)backingStoreByRemovingPersistentIDs:(const struct unordered_set<long long, std::tr1::hash<long long>, std::equal_to<long long>, std::allocator<long long>, false> { struct _Identity<long long> { } x1; struct equal_to<long long> { } x2; struct hash<long long> { } x3; struct _Mod_range_hashing { } x4; struct allocator<std::tr1::__detail::_Hash_node<long long, false> > { } x5; struct _Hash_node<long long, false> {} **x6; unsigned int x7; unsigned int x8; struct _Prime_rehash_policy { float x_9_1_1; float x_9_1_2; unsigned long x_9_1_3; } x9; }*)arg1;
- (BOOL)containsPersistentIDs:(const struct unordered_set<long long, std::tr1::hash<long long>, std::equal_to<long long>, std::allocator<long long>, false> { struct _Identity<long long> { } x1; struct equal_to<long long> { } x2; struct hash<long long> { } x3; struct _Mod_range_hashing { } x4; struct allocator<std::tr1::__detail::_Hash_node<long long, false> > { } x5; struct _Hash_node<long long, false> {} **x6; unsigned int x7; unsigned int x8; struct _Prime_rehash_policy { float x_9_1_1; float x_9_1_2; unsigned long x_9_1_3; } x9; }*)arg1;
- (long long)persistentIDAtIndex:(unsigned int)arg1;
- (void)enumerateSectionsUsingBlock:(id)arg1;
- (void)enumeratePersistentIDsUsingBlock:(id)arg1;
- (unsigned int)count;
- (void).cxx_destruct;
- (id).cxx_construct;

@end
