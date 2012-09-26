/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDReference : NSObject <NSCopying> {
    struct EDAreaReference { 
        int firstRow; 
        int firstColumn; 
        int lastRow; 
        int lastColumn; 
    } mAreaReference;
}

+ (id)referenceWithAreaReference:(struct EDAreaReference { int x1; int x2; int x3; int x4; }*)arg1;
+ (id)referenceWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;
+ (id)reference;

- (bool)fullyAdjacentToReference:(id)arg1;
- (bool)isColumnReference;
- (bool)isRowReference;
- (struct EDAreaReference { int x1; int x2; int x3; int x4; })areaReference;
- (bool)isValidCellReference;
- (BOOL)isEqualToReference:(id)arg1;
- (id)initWithAreaReference:(struct EDAreaReference { int x1; int x2; int x3; int x4; }*)arg1;
- (id)initWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;
- (void)unionWithRow:(int)arg1 column:(int)arg2;
- (void)unionWithReference:(id)arg1;
- (void)setLastRow:(int)arg1;
- (void)setFirstRow:(int)arg1;
- (void)unionWithFirstRow:(int)arg1 lastRow:(int)arg2 firstColumn:(int)arg3 lastColumn:(int)arg4;
- (bool)containsRow:(int)arg1 column:(int)arg2;
- (bool)isValidAreaReference;
- (bool)isCellReference;
- (unsigned int)countOfCellsBeingReferenced;
- (void)setFirstColumn:(int)arg1;
- (void)setLastColumn:(int)arg1;
- (int)lastColumn;
- (int)firstColumn;
- (int)lastRow;
- (int)firstRow;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id).cxx_construct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
