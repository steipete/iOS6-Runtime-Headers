/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/Foundation.framework/Foundation
 */

@class NSString;

@interface NSLayoutConstraint : NSObject <NSISConstraint> {
    id _container;
    id _firstItem;
    id _secondItem;
    float _constant;
    float _loweredConstant;
    id _markerAndPositiveExtraVar;
    id _negativeExtraVar;
    float _coefficient;
    float _priority;
    unsigned long long _layoutConstraintFlags;
    id _flange;
}

@property float priority;
@property BOOL shouldBeArchived;
@property id firstItem;
@property int firstAttribute;
@property int relation;
@property id secondItem;
@property int secondAttribute;
@property float multiplier;
@property float constant;
@property(copy) NSString * identifier;
@property(readonly) BOOL hasBeenLowered;
@property id container;
@property(copy) NSString * symbolicConstant;

+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 constant:(float)arg4;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 constant:(float)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 symbolicConstant:(id)arg7 theme:(id)arg8;
+ (id)constraintsWithVisualFormat:(id)arg1 options:(unsigned int)arg2 metrics:(id)arg3 views:(id)arg4;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 constant:(float)arg7;
+ (id)constraintWithItem:(id)arg1 attribute:(int)arg2 relatedBy:(int)arg3 toItem:(id)arg4 attribute:(int)arg5 multiplier:(float)arg6 symbolicConstant:(id)arg7;

- (id)init;
- (void)dealloc;
- (id)description;
- (BOOL)_loweredConstantIsRounded;
- (void)_containerGeometryDidChange;
- (void)setContainer:(id)arg1;
- (BOOL)_nsib_isRedundant;
- (void)_addToEngine:(id)arg1;
- (id)_loweredExpression;
- (BOOL)_describesSameRestrictionAsConstraint:(id)arg1;
- (id)_constraintByReplacingView:(id)arg1 withView:(id)arg2;
- (id)symbolicConstant;
- (void)_clearWeakContainerReference;
- (void)_setPrimitiveConstraintType:(int)arg1;
- (int)_primitiveConstraintType;
- (void)_setDeferDTraceLogging:(BOOL)arg1;
- (BOOL)_deferDTraceLogging;
- (void)_setNegativeExtraVar:(id)arg1;
- (id)_negativeExtraVar;
- (void)_setMarkerAndPositiveErrorVar:(id)arg1;
- (float)_fudgeIncrement;
- (BOOL)_isFudgeable;
- (void)setHasBeenLowered:(BOOL)arg1;
- (void)setSymbolicConstant:(id)arg1;
- (void)_setSecondAttribute:(int)arg1;
- (void)_setSecondItem:(id)arg1;
- (void)_setMultiplier:(float)arg1;
- (void)_setRelation:(int)arg1;
- (void)_setFirstAttribute:(int)arg1;
- (void)_setFirstItem:(id)arg1;
- (BOOL)_nsib_isRedundantInEngine:(id)arg1;
- (void)_removeFromEngine:(id)arg1;
- (void)_makeExtraVars;
- (BOOL)_addToEngine:(id)arg1 integralizationAdjustment:(float)arg2 mutuallyExclusiveConstraints:(id*)arg3;
- (float)priorityForVariable:(id)arg1;
- (id)_constraintByReplacingItem:(id)arg1 withItem:(id)arg2;
- (void)setAnimations:(id)arg1;
- (id)animations;
- (void)setIdentifier:(id)arg1;
- (void)setShouldBeArchived:(BOOL)arg1;
- (BOOL)shouldBeArchived;
- (void)setPriority:(float)arg1;
- (int)secondAttribute;
- (id)_priorityDescription;
- (id)equationDescription;
- (id)asciiArtDescription;
- (id)identifier;
- (id)descriptionAccessory;
- (float)priority;
- (id)_descriptionforSymbolicConstant;
- (int)relation;
- (void)_setSymbolicConstant:(id)arg1 constant:(float)arg2;
- (BOOL)_effectiveConstant:(float*)arg1 error:(id*)arg2;
- (BOOL)_tryToChangeContainerGeometryWithUndoHandler:(id)arg1;
- (void)_setSymbolicConstant:(id)arg1;
- (id)_symbolicConstant;
- (id)_markerAndPositiveExtraVar;
- (float)_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarkerScaling:(float*)arg1;
- (id)_loweredExpressionReportingConstantIsRounded:(BOOL*)arg1;
- (struct CGSize { float x1; float x2; })_engineToContainerScalingCoefficients;
- (id)secondItem;
- (id)firstItem;
- (int)firstAttribute;
- (int)_constraintType;
- (float)_allowedMagnitudeForIntegralizationAdjustment;
- (void)_setIdentifier:(id)arg1;
- (id)_identifier;
- (id)_constantDescriptionForDTrace;
- (id)container;
- (BOOL)hasBeenLowered;
- (float)nsis_allowedMagnitudeForIntegralizationAdjustmentOfConstraintWithMarker:(id)arg1;
- (BOOL)nsis_valueOfVariableIsUserObservable:(id)arg1;
- (BOOL)nsis_shouldIntegralizeVariable:(id)arg1;
- (id)nsis_descriptionOfVariable:(id)arg1;
- (void)setConstant:(float)arg1;
- (void)nsis_valueOfVariable:(id)arg1 didChangeInEngine:(id)arg2;
- (float)constant;
- (float)multiplier;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)defaultResolvedValue:(float*)arg1 forSymbolicConstant:(id)arg2 error:(id*)arg3;

@end
