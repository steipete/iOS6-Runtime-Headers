/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@class AVMutableMetadataItemInternal, NSString, <NSObject><NSCopying>, NSLocale, NSDictionary;

@interface AVMutableMetadataItem : AVMetadataItem  {
    AVMutableMetadataItemInternal *_mutablePriv;
}

@property(copy) <NSObject><NSCopying> * key;
@property(copy) NSString * keySpace;
@property(copy) NSLocale * locale;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } duration;
@property(copy) <NSObject><NSCopying> * value;
@property(copy) NSDictionary * extraAttributes;

+ (id)metadataItem;

- (void)setKeySpace:(id)arg1;
- (id)keySpace;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (void)setDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setExtraAttributes:(id)arg1;
- (id)extraAttributes;
- (void)setLocale:(id)arg1;
- (id)locale;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })duration;
- (void)setValue:(id)arg1;
- (void)setKey:(id)arg1;
- (id)value;
- (id)key;

@end
