/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFObjectCache : NSObject {
    NSInteger _arrayCapacity;
    struct __CFArray { } *_keysAndValues;
    BOOL _useIsEqual;
}

- (void)dealloc;
- (id)initWithCapacity:(long)arg1;
- (BOOL)isObjectInCache:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setCapacity:(long)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setUsesIsEqualForComparison:(BOOL)arg1;

@end