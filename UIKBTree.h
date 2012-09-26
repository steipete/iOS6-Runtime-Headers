/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSMutableArray, NSString, NSMutableDictionary;

@interface UIKBTree : NSObject <NSCopying> {
    int type;
    NSString *name;
    NSMutableDictionary *properties;
    NSMutableArray *subtrees;
    NSMutableDictionary *cache;
}

@property(readonly) BOOL modifiesKeyplane;
@property(readonly) BOOL acceptsShiftLock;
@property int type;
@property(retain) NSString * name;
@property(retain) NSMutableDictionary * properties;
@property(retain) NSMutableArray * subtrees;
@property(retain) NSMutableDictionary * cache;

+ (id)mergeStringForKeyName:(id)arg1;
+ (BOOL)shouldSkipCacheString:(id)arg1;
+ (id)treeOfType:(int)arg1;
+ (id)shapesForControlKeyShapes:(id)arg1 options:(int)arg2;
+ (id)stringForType:(int)arg1;
+ (id)uniqueName;
+ (id)keyboard;
+ (id)key;

- (id)initWithType:(int)arg1;
- (void)setType:(int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)cache;
- (void)dealloc;
- (void)setDisabled:(BOOL)arg1;
- (id)name;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (BOOL)renderAsStringKey;
- (id)cacheDisplayString;
- (BOOL)shouldCacheKey;
- (void)setGhost:(BOOL)arg1;
- (void)setIsClientVariantOverride:(BOOL)arg1;
- (BOOL)isLetters;
- (id)geometriesOrderedByPosition;
- (void)clearTransientCaches;
- (id)keyAttributes;
- (id)keyForString:(id)arg1;
- (void)cacheKey:(id)arg1;
- (BOOL)subtreesAreOrdered;
- (void)zipAttributes;
- (int)indexOfSubtree:(id)arg1;
- (id)subtreesWithProperty:(id)arg1 value:(id)arg2;
- (id)subtreeWithName:(id)arg1 rows:(id)arg2;
- (id)subtreeWithType:(int)arg1;
- (BOOL)isDuplicateOfTree:(id)arg1;
- (BOOL)isEqualToTree:(id)arg1;
- (id)initWithType:(int)arg1 withName:(id)arg2 withProperties:(id)arg3 withSubtrees:(id)arg4 withCache:(id)arg5;
- (BOOL)isHashed;
- (id)nameFromAttributes;
- (BOOL)renderAsStringKeyExcludingPunctuation:(BOOL)arg1;
- (int)_variantType;
- (void)updateDictationKeyOnNumberPads:(BOOL)arg1;
- (id)findLeftMoreKey;
- (id)geometries;
- (id)_cacheRootNameForKey:(id)arg1;
- (void)zipGeometries:(BOOL)arg1 attributes:(BOOL)arg2;
- (id)attributeSet:(BOOL)arg1;
- (id)geometrySet:(BOOL)arg1;
- (BOOL)_needsScaling;
- (BOOL)isGenerated;
- (id)subtreeAtIndexPath:(id)arg1 withPosition:(int)arg2;
- (BOOL)isSameAsTree:(id)arg1;
- (void)setCache:(id)arg1;
- (void)setProperties:(id)arg1;
- (BOOL)isLeafType;
- (void)setShape:(id)arg1;
- (BOOL)usesAdaptiveKeys;
- (id)keysOrderedByPosition;
- (BOOL)looksLike:(id)arg1;
- (id)variantDisplayString;
- (void)setSplitMode:(int)arg1;
- (int)splitMode;
- (void)setAttributes:(id)arg1;
- (void)setVariantType:(int)arg1;
- (void)setClipCorners:(int)arg1;
- (int)clipCorners;
- (void)setInteractionType:(int)arg1;
- (BOOL)setObject:(id)arg1 forProperty:(id)arg2;
- (BOOL)modifiesKeyplane;
- (BOOL)acceptsShiftLock;
- (BOOL)behavesAsShiftKey;
- (int)highlightedVariantIndex;
- (id)unhashedName;
- (id)alternateKeyplaneName;
- (BOOL)avoidsLanguageIndicator;
- (void)setRendering:(int)arg1;
- (id)keysOrderedByPositionWithoutZip;
- (BOOL)noLanguageIndicator;
- (void)setHighlightedVariantIndex:(int)arg1;
- (void)setSubtrees:(id)arg1;
- (void)setVariantPopupBias:(id)arg1;
- (void)updateVariantTypeForActions:(unsigned int)arg1;
- (id)clientVariantRepresentedString;
- (id)clientVariantActionName;
- (void)setDisplayType:(int)arg1;
- (id)variantPopupBias;
- (id)componentName;
- (BOOL)boolForProperty:(id)arg1;
- (BOOL)usesKeyCharging;
- (BOOL)supportsType:(int)arg1;
- (void)updateMoreAndInternationalKeysWithOptions:(int)arg1;
- (BOOL)isClientVariantOverride;
- (BOOL)notUseCandidateSelection;
- (void)removeClientVariantActionInfo;
- (void)setClientVariantRepresentedString:(id)arg1;
- (void)setClientVariantActionName:(id)arg1;
- (void)setOverrideDisplayString:(id)arg1;
- (int)variantType;
- (void)setDisplayRowHint:(int)arg1;
- (id)numberForProperty:(id)arg1;
- (id)keySet;
- (void)setIsGenerated:(BOOL)arg1;
- (void)zipGeometrySet;
- (id)firstCachedKeyWithName:(id)arg1;
- (id)keysByKeyName:(id)arg1;
- (id)shiftAlternateKeyplaneName;
- (BOOL)isShiftKeyplane;
- (BOOL)looksLikeShiftAlternate;
- (void)setRepresentedString:(id)arg1;
- (id)localizationKey;
- (id)autolocalizedKeyCacheIterator;
- (void)setDisplayString:(id)arg1;
- (void)setDisplayTypeHint:(int)arg1;
- (id)cachedKeysByKeyName:(id)arg1;
- (id)keys;
- (id)subtrees;
- (void)setVisualStyle:(int)arg1;
- (id)subtreeWithName:(id)arg1;
- (id)keysWithString:(id)arg1;
- (id)stringForProperty:(id)arg1;
- (id)layoutName;
- (void)setFrameOnly:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)shape;
- (void)setPaddedFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setGeometry:(id)arg1;
- (id)geometry;
- (id)displayString;
- (int)displayTypeHint;
- (id)overrideDisplayString;
- (BOOL)ghost;
- (int)interactionType;
- (int)intForProperty:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })paddedFrame;
- (int)rendering;
- (int)displayRowHint;
- (int)visualStyle;
- (int)displayType;
- (id)keyplaneForKey:(id)arg1;
- (BOOL)isShiftKeyPlaneChooser;
- (BOOL)visible;
- (BOOL)shouldSkipCandidateSelection;
- (BOOL)usesAutoShift;
- (void)setShouldSkipCandidateSelection:(BOOL)arg1;
- (id)representedString;
- (BOOL)disabled;
- (void)setVisible:(BOOL)arg1;
- (int)textAlignment;
- (void)setTextAlignment:(int)arg1;
- (id)recursiveDescription;
- (int)type;
- (id)properties;
- (void)setName:(id)arg1;

@end
