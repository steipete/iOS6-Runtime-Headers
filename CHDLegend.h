/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class EDCollection, OADGraphicProperties, EDResources;

@interface CHDLegend : NSObject  {
    int mLegendPosition;
    OADGraphicProperties *mGraphicProperties;
    unsigned int mFontIndex;
    EDCollection *mLegendEntries;
    EDResources *mResources;
    boolmIsVertical;
}


- (bool)isSingleColumnLegend;
- (unsigned int)fontIndex;
- (id)legendEntries;
- (void)setIsSingleColumnLegend:(bool)arg1;
- (void)setLegendPosition:(int)arg1;
- (void)setGraphicProperties:(id)arg1;
- (id)initWithResources:(id)arg1;
- (void)setFontIndex:(unsigned int)arg1;
- (int)legendPosition;
- (id)graphicProperties;
- (id)font;
- (void)dealloc;
- (void)setFont:(id)arg1;

@end
