/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSString;

@interface CALight : NSObject <NSCopying, NSCoding> {
    void *_attr;
    void *_priv;
}

@property(copy) NSString * type;
@property(copy) NSString * name;
@property(getter=isEnabled) BOOL enabled;
@property struct CGColor { }* color;
@property float intensity;
@property float ambientIntensity;
@property float diffuseIntensity;
@property float specularIntensity;
@property struct CAPoint3D { float x1; float x2; float x3; } direction;
@property(retain) id image;
@property float imageRotation;
@property(copy) NSString * imageBlendMode;
@property float imageNormalAngle;
@property struct CAPoint3D { float x1; float x2; float x3; } position;
@property float falloffDistance;
@property float falloff;
@property float coneAngle;
@property float coneEdgeSoftness;

+ (id)lightWithType:(id)arg1;
+ (id)defaultValueForKey:(id)arg1;

- (void)setImageBlendMode:(id)arg1;
- (id)imageBlendMode;
- (void)setImageNormalAngle:(float)arg1;
- (float)imageNormalAngle;
- (void)setImageRotation:(float)arg1;
- (float)imageRotation;
- (void)setConeEdgeSoftness:(float)arg1;
- (float)coneEdgeSoftness;
- (void)setConeAngle:(float)arg1;
- (float)coneAngle;
- (void)setFalloff:(float)arg1;
- (float)falloff;
- (void)setFalloffDistance:(float)arg1;
- (float)falloffDistance;
- (void)setSpecularIntensity:(float)arg1;
- (float)specularIntensity;
- (void)setDiffuseIntensity:(float)arg1;
- (float)diffuseIntensity;
- (void)setAmbientIntensity:(float)arg1;
- (float)ambientIntensity;
- (void)setIntensity:(float)arg1;
- (float)intensity;
- (void)setPosition:(struct CAPoint3D { float x1; float x2; float x3; })arg1;
- (id)initWithType:(id)arg1;
- (struct CGColor { }*)color;
- (void)setType:(id)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
- (struct Object { int (**x1)(); struct Atomic { struct { int x_1_2_1; } x_2_1_1; } x2; }*)CA_copyRenderValue;
- (void)setEnabled:(BOOL)arg1;
- (BOOL)isEnabled;
- (void)setImage:(id)arg1;
- (id)image;
- (id)init;
- (void)dealloc;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (id)name;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct CAPoint3D { float x1; float x2; float x3; })direction;
- (void)setColor:(struct CGColor { }*)arg1;
- (void)setDirection:(struct CAPoint3D { float x1; float x2; float x3; })arg1;
- (struct CAPoint3D { float x1; float x2; float x3; })position;
- (id)type;
- (void)setName:(id)arg1;
- (void)setValue:(id)arg1 forKeyPath:(id)arg2;
- (id)valueForKeyPath:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
