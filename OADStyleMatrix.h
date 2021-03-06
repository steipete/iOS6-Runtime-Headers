/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface OADStyleMatrix : NSObject  {
    NSMutableArray *mFills;
    NSMutableArray *mStrokes;
    NSMutableArray *mEffects;
    NSMutableArray *mBgFills;
}


- (unsigned int)bgFillCount;
- (void)addBgFill:(id)arg1;
- (id)effectsAtIndex:(unsigned int)arg1 color:(id)arg2;
- (unsigned int)effectsCount;
- (void)addEffects:(id)arg1;
- (unsigned int)strokeCount;
- (void)addStroke:(id)arg1;
- (id)fillAtIndex:(unsigned int)arg1 color:(id)arg2;
- (unsigned int)fillCount;
- (void)addFill:(id)arg1;
- (id)bgFillAtIndex:(unsigned int)arg1;
- (id)effectsAtIndex:(unsigned int)arg1;
- (id)fillAtIndex:(unsigned int)arg1;
- (id)strokeAtIndex:(unsigned int)arg1;
- (id)strokeAtIndex:(unsigned int)arg1 color:(id)arg2;
- (id)init;
- (void)dealloc;

@end
