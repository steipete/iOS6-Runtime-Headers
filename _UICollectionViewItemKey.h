/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSString, NSIndexPath;

@interface _UICollectionViewItemKey : NSObject <NSCopying> {
    NSIndexPath *_indexPath;
    NSString *_identifier;
    unsigned int type;
}

@property unsigned int type;
@property(retain) NSIndexPath * indexPath;
@property(retain) NSString * identifier;

+ (id)collectionItemKeyForLayoutAttributes:(id)arg1;
+ (id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2;
+ (id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2;
+ (id)collectionItemKeyForCellWithIndexPath:(id)arg1;

- (void)setType:(unsigned int)arg1;
- (id)init;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setIndexPath:(id)arg1;
- (id)indexPath;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (unsigned int)type;

@end
