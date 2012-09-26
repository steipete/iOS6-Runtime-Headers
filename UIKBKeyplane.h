/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSArray, NSString, UIKBIdentifierList, UIKBAttributeList, NSMutableArray;

@interface UIKBKeyplane : NSObject <NSCoding, NSCopying> {
    NSString *m_name;
    NSMutableArray *m_keylayouts;
    UIKBAttributeList *m_attributes;
    UIKBIdentifierList *m_supportedTypes;
    NSArray *m_keys;
}

@property(retain) NSString * name;
@property(retain) NSArray * keylayouts;
@property(readonly) NSArray * keys;
@property(readonly) NSArray * keysOrderedByPosition;
@property(copy) UIKBAttributeList * attributes;
@property(copy) UIKBIdentifierList * supportedTypes;

+ (id)keyplane;

- (id)init;
- (void)dealloc;
- (id)name;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)usesAdaptiveKeys;
- (id)keysOrderedByPosition;
- (BOOL)looksLike:(id)arg1;
- (id)keylayoutWithName:(id)arg1;
- (id)initWithName:(id)arg1 keylayouts:(id)arg2 attributes:(id)arg3 supportedTypes:(id)arg4;
- (void)setSupportedTypes:(id)arg1;
- (id)supportedTypes;
- (void)setKeylayouts:(id)arg1;
- (id)keylayouts;
- (void)layoutInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setAttributes:(id)arg1;
- (id)alternateKeyplaneName;
- (BOOL)usesKeyCharging;
- (BOOL)supportsType:(int)arg1;
- (BOOL)notUseCandidateSelection;
- (id)keysByKeyName:(id)arg1;
- (id)shiftAlternateKeyplaneName;
- (BOOL)isShiftKeyplane;
- (BOOL)looksLikeShiftAlternate;
- (id)keys;
- (BOOL)isShiftKeyPlaneChooser;
- (BOOL)shouldSkipCandidateSelection;
- (BOOL)usesAutoShift;
- (id)attributes;
- (void)setName:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
