/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADArcToPathElement : OADPathElement  {
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } y; 
    } mSemiaxes;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        int value; 
    } mStartAngle;
    struct OADAdjustCoord { 
        BOOL isFormulaResult; 
        int value; 
    } mAngleLength;
}


- (struct OADAdjustCoord { BOOL x1; int x2; })angleLength;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })semiaxes;
- (id)initWithSemiaxes:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })arg1 startAngle:(struct OADAdjustCoord { BOOL x1; int x2; })arg2 angleLength:(struct OADAdjustCoord { BOOL x1; int x2; })arg3;
- (struct OADAdjustCoord { BOOL x1; int x2; })startAngle;
- (id).cxx_construct;

@end
