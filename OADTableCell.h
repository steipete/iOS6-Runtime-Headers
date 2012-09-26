/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADTextBody, OADTableCellProperties;

@interface OADTableCell : NSObject  {
    OADTextBody *mTextBody;
    OADTableCellProperties *mProperties;
    int mRowSpan;
    int mGridSpan;
    BOOL mHorzMerge;
    BOOL mVertMerge;
    int mTopRow;
    int mLeftColumn;
}


- (void)setLeftColumn:(int)arg1;
- (int)leftColumn;
- (void)setTopRow:(int)arg1;
- (int)topRow;
- (int)spanAlongDir:(int)arg1;
- (BOOL)merge:(int)arg1;
- (void)setTextBody:(id)arg1;
- (void)setVertMerge:(BOOL)arg1;
- (void)setHorzMerge:(BOOL)arg1;
- (void)setGridSpan:(int)arg1;
- (id)textBody;
- (int)gridSpan;
- (BOOL)vertMerge;
- (BOOL)horzMerge;
- (void)setRowSpan:(int)arg1;
- (int)rowSpan;
- (id)init;
- (void)dealloc;
- (void)setProperties:(id)arg1;
- (id)properties;

@end
