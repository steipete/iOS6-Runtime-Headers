/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSDictionary, NSString, NSArray;

@interface CAEmitterCell : NSObject <CAPropertyInfo, NSCoding, CAMediaTiming> {
    void *_attr[2];
    void *_state;
    unsigned int _flags;
}

@property(copy) NSString * name;
@property(getter=isEnabled) BOOL enabled;
@property float birthRate;
@property float lifetime;
@property float lifetimeRange;
@property float emissionLatitude;
@property float emissionLongitude;
@property float emissionRange;
@property float velocity;
@property float velocityRange;
@property float xAcceleration;
@property float yAcceleration;
@property float zAcceleration;
@property float scale;
@property float scaleRange;
@property float scaleSpeed;
@property float spin;
@property float spinRange;
@property struct CGColor { }* color;
@property float redRange;
@property float greenRange;
@property float blueRange;
@property float alphaRange;
@property float redSpeed;
@property float greenSpeed;
@property float blueSpeed;
@property float alphaSpeed;
@property(retain) id contents;
@property struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; } contentsRect;
@property(copy) NSString * minificationFilter;
@property(copy) NSString * magnificationFilter;
@property float minificationFilterBias;
@property(copy) NSArray * emitterCells;
@property(copy) NSDictionary * style;
@property double beginTime;
@property double duration;
@property float speed;
@property double timeOffset;
@property float repeatCount;
@property double repeatDuration;
@property BOOL autoreverses;
@property(copy) NSString * fillMode;

+ (id)emitterCell;
+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
+ (id)properties;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;

- (void)setMagnificationFilter:(id)arg1;
- (void)setMinificationFilter:(id)arg1;
- (void)setContentsRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setStyle:(id)arg1;
- (void)setAutoreverses:(BOOL)arg1;
- (void)setRepeatCount:(float)arg1;
- (void)setTimeOffset:(double)arg1;
- (void)setScale:(float)arg1;
- (void)setEmitterCells:(id)arg1;
- (void)setMinificationFilterBias:(float)arg1;
- (void)setContents:(id)arg1;
- (void)setAlphaSpeed:(float)arg1;
- (void)setAlphaRange:(float)arg1;
- (void)setBlueSpeed:(float)arg1;
- (void)setBlueRange:(float)arg1;
- (void)setGreenSpeed:(float)arg1;
- (void)setGreenRange:(float)arg1;
- (void)setRedSpeed:(float)arg1;
- (void)setRedRange:(float)arg1;
- (void)setSpinRange:(float)arg1;
- (void)setSpin:(float)arg1;
- (void)setScaleSpeed:(float)arg1;
- (void)setScaleRange:(float)arg1;
- (void)setZAcceleration:(float)arg1;
- (void)setYAcceleration:(float)arg1;
- (void)setXAcceleration:(float)arg1;
- (void)setVelocityRange:(float)arg1;
- (void)setEmissionRange:(float)arg1;
- (void)setEmissionLongitude:(float)arg1;
- (void)setEmissionLatitude:(float)arg1;
- (void)setLifetimeRange:(float)arg1;
- (void)setLifetime:(float)arg1;
- (void)setBirthRate:(float)arg1;
- (id)emitterCells;
- (float)minificationFilterBias;
- (id)minificationFilter;
- (id)magnificationFilter;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })contentsRect;
- (float)alphaSpeed;
- (float)blueSpeed;
- (float)greenSpeed;
- (float)redSpeed;
- (float)alphaRange;
- (float)blueRange;
- (float)greenRange;
- (float)redRange;
- (struct CGColor { }*)color;
- (float)spinRange;
- (float)spin;
- (float)scaleSpeed;
- (float)scaleRange;
- (float)zAcceleration;
- (float)yAcceleration;
- (float)xAcceleration;
- (float)velocityRange;
- (float)emissionRange;
- (float)emissionLongitude;
- (float)emissionLatitude;
- (float)lifetimeRange;
- (float)lifetime;
- (float)birthRate;
- (id)contents;
- (void)setVelocity:(float)arg1;
- (float)velocity;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (void)setFillMode:(id)arg1;
- (id)fillMode;
- (BOOL)autoreverses;
- (void)setRepeatDuration:(double)arg1;
- (double)repeatDuration;
- (float)repeatCount;
- (double)timeOffset;
- (void)CA_prepareRenderValue;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (void)setEnabled:(BOOL)arg1;
- (void)setSpeed:(float)arg1;
- (float)speed;
- (double)beginTime;
- (BOOL)isEnabled;
- (void)setDuration:(double)arg1;
- (void)setBeginTime:(double)arg1;
- (id)style;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)name;
- (void)setColor:(struct CGColor { }*)arg1;
- (double)duration;
- (float)scale;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (id)debugDescription;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
