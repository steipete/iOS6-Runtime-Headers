/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString, NSDictionary;

@interface CABehavior : NSObject <NSCoding, NSCopying> {
    void *_attr;
    unsigned int _refcount;
    unsigned int _uid;
    void *_priv;
}

@property(getter=isEnabled) BOOL enabled;
@property(copy) NSString * name;
@property id delegate;
@property(copy) NSDictionary * style;

+ (id)behavior;
+ (int (*)())CA_getterForType:(int)arg1;
+ (int (*)())CA_setterForType:(int)arg1;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (BOOL)resolveInstanceMethod:(SEL)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)setStyle:(id)arg1;
- (void)_setCARenderBehavior:(struct Behavior { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; unsigned int x3; struct Ref<CA::Render::String> { struct String {} *x_4_1_1; } x4; unsigned int x5; unsigned int x6; unsigned int x7 : 8; unsigned int x8 : 8; struct Ref<const CA::Render::Behavior> { struct Behavior {} *x_9_1_1; } x9; }*)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (id)style;
- (id)init;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)name;
- (unsigned int)retainCount;
- (oneway void)release;
- (id)retain;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
