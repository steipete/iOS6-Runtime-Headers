/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSString;

@interface UIKBCacheToken : NSObject <NSCopying> {
    NSMutableArray *_components;
    NSString *_name;
    int _emptyFields;
}

@property(readonly) NSString * string;
@property struct CGSize { float x1; float x2; } size;
@property(retain) NSString * name;
@property int rowHint;
@property int displayHint;
@property int emptyFields;
@property(readonly) BOOL hasKey;

+ (id)tokenTemplateFilledForKey:(id)arg1 style:(int)arg2 size:(struct CGSize { float x1; float x2; })arg3;
+ (id)tokenTemplateForKey:(id)arg1 style:(int)arg2 size:(struct CGSize { float x1; float x2; })arg3;
+ (id)tokenTemplateForKey:(id)arg1 name:(id)arg2 style:(int)arg3 size:(struct CGSize { float x1; float x2; })arg4;
+ (id)tokenForKey:(id)arg1 style:(int)arg2 state:(int)arg3;
+ (id)tokenForKey:(id)arg1 style:(int)arg2 state:(int)arg3 clipCorners:(int)arg4;
+ (id)tokenForKeyplane:(id)arg1;

- (struct CGSize { float x1; float x2; })size;
- (void)dealloc;
- (id)name;
- (id)string;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setEmptyFields:(int)arg1;
- (void)setDisplayHint:(int)arg1;
- (int)displayHint;
- (void)setRowHint:(int)arg1;
- (int)rowHint;
- (id)initWithComponents:(id)arg1 name:(id)arg2;
- (id)initWithComponents:(id)arg1 name:(id)arg2 emptyFields:(int)arg3;
- (id)stringForSplitState:(BOOL)arg1;
- (id)stringForKey:(id)arg1 state:(int)arg2;
- (BOOL)hasKey;
- (int)emptyFields;
- (id)stringForState:(int)arg1;
- (void)setSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setName:(id)arg1;

@end
