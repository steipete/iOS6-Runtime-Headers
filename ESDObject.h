/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class ESDContainer;

@interface ESDObject : NSObject  {
    struct EshObject { int (**x1)(); unsigned short x2; } *mEshObject;
    ESDContainer *mParent;
    boolmIsChart;
}


- (id)pbInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;
- (void)writeToWriter:(struct OcWriter { int (**x1)(); }*)arg1;
- (long)shapeID;
- (bool)isChart;
- (id)initWithEshObject:(struct EshObject { int (**x1)(); unsigned short x2; }*)arg1;
- (struct EshGroup { int (**x1)(); unsigned short x2; struct EshContentData { struct EshOpt { int (**x_1_2_1)(); unsigned short x_1_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_1_2_3; struct ChMap<unsigned long, EshOpt::Value, CsLess<unsigned long> > { struct map<unsigned long, EshOpt::Value, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, EshOpt::Value>> > { struct _Rb_tree<unsigned long, std::pair<const unsigned long, EshOpt::Value>, std::_Select1st<std::pair<const unsigned long, EshOpt::Value>>, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, EshOpt::Value>> > { struct _Rb_tree_impl<CsLess<unsigned long>, false> { struct CsLess<unsigned long> { } x_1_6_1; struct _Rb_tree_node_base { int x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; unsigned int x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_1_2_4; struct EshColor { struct Data { int x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_1_2_5; } x_3_1_1; struct EshOpt { int (**x_2_2_1)(); unsigned short x_2_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_2_2_3; struct ChMap<unsigned long, EshOpt::Value, CsLess<unsigned long> > { struct map<unsigned long, EshOpt::Value, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, EshOpt::Value>> > { struct _Rb_tree<unsigned long, std::pair<const unsigned long, EshOpt::Value>, std::_Select1st<std::pair<const unsigned long, EshOpt::Value>>, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, EshOpt::Value>> > { struct _Rb_tree_impl<CsLess<unsigned long>, false> { struct CsLess<unsigned long> { } x_1_6_1; struct _Rb_tree_node_base { int x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; unsigned int x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_2_2_4; struct EshColor { struct Data { int x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_2_2_5; } x_3_1_2; struct EshOpt { int (**x_3_2_1)(); unsigned short x_3_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_3_2_3; struct ChMap<unsigned long, EshOpt::Value, CsLess<unsigned long> > { struct map<unsigned long, EshOpt::Value, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, EshOpt::Value>> > { struct _Rb_tree<unsigned long, std::pair<const unsigned long, EshOpt::Value>, std::_Select1st<std::pair<const unsigned long, EshOpt::Value>>, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, EshOpt::Value>> > { struct _Rb_tree_impl<CsLess<unsigned long>, false> { struct CsLess<unsigned long> { } x_1_6_1; struct _Rb_tree_node_base { int x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; unsigned int x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_3_2_4; struct EshColor { struct Data { int x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_3_2_5; } x_3_1_3; struct EshSp { int (**x_4_2_1)(); unsigned short x_4_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_4_2_3; unsigned int x_4_2_4; boolx_4_2_5; boolx_4_2_6; boolx_4_2_7; boolx_4_2_8; boolx_4_2_9; boolx_4_2_10; boolx_4_2_11; boolx_4_2_12; boolx_4_2_13; boolx_4_2_14; boolx_4_2_15; boolx_4_2_16; } x_3_1_4; struct CsRect<long> { long x_5_2_1[4]; } x_3_1_5; } x3; int (**x4)(); struct EshSpgr {} *x5; struct EshGroupProperties { int (**x_6_1_1)(); unsigned short x_6_1_2; struct EshContentData {} *x_6_1_3; struct EshRectAtom {} *x_6_1_4; } x6; struct EshGroupLocks { int (**x_7_1_1)(); unsigned short x_7_1_2; struct EshContentData {} *x_7_1_3; } x7; struct EshDiagram { int (**x_8_1_1)(); unsigned short x_8_1_2; struct EshContentData {} *x_8_1_3; } x8; }*)eshGroup;
- (struct EshShape { int (**x1)(); unsigned short x2; struct EshContentData { struct EshOpt { int (**x_1_2_1)(); unsigned short x_1_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_1_2_3; struct ChMap<unsigned long, EshOpt::Value, CsLess<unsigned long> > { struct map<unsigned long, EshOpt::Value, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, EshOpt::Value>> > { struct _Rb_tree<unsigned long, std::pair<const unsigned long, EshOpt::Value>, std::_Select1st<std::pair<const unsigned long, EshOpt::Value>>, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, EshOpt::Value>> > { struct _Rb_tree_impl<CsLess<unsigned long>, false> { struct CsLess<unsigned long> { } x_1_6_1; struct _Rb_tree_node_base { int x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; unsigned int x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_1_2_4; struct EshColor { struct Data { int x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_1_2_5; } x_3_1_1; struct EshOpt { int (**x_2_2_1)(); unsigned short x_2_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_2_2_3; struct ChMap<unsigned long, EshOpt::Value, CsLess<unsigned long> > { struct map<unsigned long, EshOpt::Value, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, EshOpt::Value>> > { struct _Rb_tree<unsigned long, std::pair<const unsigned long, EshOpt::Value>, std::_Select1st<std::pair<const unsigned long, EshOpt::Value>>, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, EshOpt::Value>> > { struct _Rb_tree_impl<CsLess<unsigned long>, false> { struct CsLess<unsigned long> { } x_1_6_1; struct _Rb_tree_node_base { int x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; unsigned int x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_2_2_4; struct EshColor { struct Data { int x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_2_2_5; } x_3_1_2; struct EshOpt { int (**x_3_2_1)(); unsigned short x_3_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_3_2_3; struct ChMap<unsigned long, EshOpt::Value, CsLess<unsigned long> > { struct map<unsigned long, EshOpt::Value, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, EshOpt::Value>> > { struct _Rb_tree<unsigned long, std::pair<const unsigned long, EshOpt::Value>, std::_Select1st<std::pair<const unsigned long, EshOpt::Value>>, CsLess<unsigned long>, std::allocator<std::pair<const unsigned long, EshOpt::Value>> > { struct _Rb_tree_impl<CsLess<unsigned long>, false> { struct CsLess<unsigned long> { } x_1_6_1; struct _Rb_tree_node_base { int x_2_7_1; struct _Rb_tree_node_base {} *x_2_7_2; struct _Rb_tree_node_base {} *x_2_7_3; struct _Rb_tree_node_base {} *x_2_7_4; } x_1_6_2; unsigned int x_1_6_3; } x_1_5_1; } x_1_4_1; } x_4_3_1; } x_3_2_4; struct EshColor { struct Data { int x_1_4_1; union Value { struct RGB { unsigned char x_1_6_1; unsigned char x_1_6_2; unsigned char x_1_6_3; } x_2_5_1; unsigned short x_2_5_2; unsigned short x_2_5_3; struct AdjustedColor { unsigned char x_4_6_1; unsigned char x_4_6_2; unsigned int x_4_6_3 : 4; unsigned int x_4_6_4 : 1; unsigned int x_4_6_5 : 1; unsigned int x_4_6_6 : 1; } x_2_5_4; } x_1_4_2; } x_5_3_1; } x_3_2_5; } x_3_1_3; struct EshSp { int (**x_4_2_1)(); unsigned short x_4_2_2; struct EshHeader { int x_3_3_1; unsigned int x_3_3_2; short x_3_3_3; unsigned short x_3_3_4; unsigned char x_3_3_5; } x_4_2_3; unsigned int x_4_2_4; boolx_4_2_5; boolx_4_2_6; boolx_4_2_7; boolx_4_2_8; boolx_4_2_9; boolx_4_2_10; boolx_4_2_11; boolx_4_2_12; boolx_4_2_13; boolx_4_2_14; boolx_4_2_15; boolx_4_2_16; } x_3_1_4; struct CsRect<long> { long x_5_2_1[4]; } x_3_1_5; } x3; struct EshTextBox { int (**x_4_1_1)(); unsigned short x_4_1_2; struct EshContentData {} *x_4_1_3; } x4; struct EshFill { int (**x_5_1_1)(); unsigned short x_5_1_2; struct EshContentData {} *x_5_1_3; } x5; struct EshStroke { int (**x_6_1_1)(); unsigned short x_6_1_2; struct EshContentData {} *x_6_1_3; } x6; struct EshShadow { int (**x_7_1_1)(); unsigned short x_7_1_2; struct EshContentData {} *x_7_1_3; } x7; struct EshExtrusion { int (**x_8_1_1)(); unsigned short x_8_1_2; struct EshContentData {} *x_8_1_3; } x8; struct EshCallout { int (**x_9_1_1)(); unsigned short x_9_1_2; struct EshContentData {} *x_9_1_3; } x9; int (**x10)(); struct EshShapeProperties { int (**x_11_1_1)(); unsigned short x_11_1_2; struct EshContentData {} *x_11_1_3; int (**x_11_1_4)(); } x11; struct EshShapeLocks { int (**x_12_1_1)(); unsigned short x_12_1_2; struct EshContentData {} *x_12_1_3; } x12; struct EshShapeImageData { int (**x_13_1_1)(); unsigned short x_13_1_2; struct EshContentData {} *x_13_1_3; } x13; struct EshTextPath { int (**x_14_1_1)(); unsigned short x_14_1_2; struct EshContentData {} *x_14_1_3; } x14; struct EshPath { int (**x_15_1_1)(); unsigned short x_15_1_2; struct EshContentData {} *x_15_1_3; } x15; struct EshSkew { int (**x_16_1_1)(); unsigned short x_16_1_2; struct EshContentData {} *x_16_1_3; } x16; }*)eshShape;
- (id)initFromReader:(struct OcReader { int (**x1)(); struct EshObjectFactory {} *x2; }*)arg1 type:(unsigned short)arg2 version:(unsigned short)arg3;
- (id)ebInitWithType:(unsigned short)arg1 version:(unsigned short)arg2 state:(id)arg3;
- (void)setChart:(bool)arg1;
- (struct EshObject { int (**x1)(); unsigned short x2; }*)eshObject;
- (id)initWithType:(unsigned short)arg1;
- (void)dealloc;
- (id)parent;

@end
