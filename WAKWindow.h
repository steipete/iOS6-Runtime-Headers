/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class CALayer;

@interface WAKWindow : WAKResponder  {
    struct WKWindow { struct _WKObject { unsigned int x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; id x2; struct WKView {} *x3; struct WKView {} *x4; struct WKView {} *x5; } *_wkWindow;
    CALayer *_hostLayer;
    struct TileCache { id x1; boolx2; boolx3; boolx4; struct RetainPtr<TileCacheTombstone> { struct TileCacheTombstone { } *x_5_1_1; } x5; int x6; int x7; struct IntSize { int x_8_1_1; int x_8_1_2; } x8; boolx9; boolx10; boolx11; boolx12; boolx13; struct OwnPtr<WebCore::TileGrid> { struct TileGrid {} *x_14_1_1; } x14; struct OwnPtr<WebCore::TileGrid> { struct TileGrid {} *x_15_1_1; } x15; struct Timer<WebCore::TileCache> { int (**x_16_1_1)(); double x_16_1_2; double x_16_1_3; int x_16_1_4; unsigned int x_16_1_5; struct TileCache {} *x_16_1_6; } x16; struct Vector<WebCore::IntRect, 0> { unsigned int x_17_1_1; struct VectorBuffer<WebCore::IntRect, 0> { struct IntRect {} *x_2_2_1; unsigned int x_2_2_2; } x_17_1_2; } x17; float x18; float x19; float x20; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_21_1_1; } x21; struct Mutex { struct _opaque_pthread_mutex_t { long x_1_2_1; BOOL x_1_2_2[40]; } x_22_1_1; } x22; } *_tileCache;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _cachedVisibleRect;
    CALayer *_rootLayer;
    struct CGSize { 
        float width; 
        float height; 
    } _screenSize;
    struct CGSize { 
        float width; 
        float height; 
    } _availableScreenSize;
    float _screenScale;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } _frame;
    BOOL _useOrientationDependentFontAntialiasing;
}

@property BOOL useOrientationDependentFontAntialiasing;

+ (id)_wrapperForWindowRef:(struct WKWindow { struct _WKObject { unsigned int x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; id x2; struct WKView {} *x3; struct WKView {} *x4; struct WKView {} *x5; }*)arg1;
+ (BOOL)hasLandscapeOrientation;
+ (id)currentEvent;
+ (void)setOrientationProvider:(id)arg1;

- (BOOL)hasPendingDraw;
- (float)currentTileScale;
- (int)tilingDirection;
- (int)tilingMode;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 display:(BOOL)arg2;
- (void)sendEvent:(id)arg1;
- (BOOL)makeViewFirstResponder:(id)arg1;
- (void)sendEventSynchronously:(id)arg1;
- (BOOL)isKeyWindow;
- (void)displayRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)useOrientationDependentFontAntialiasing;
- (id)hostLayer;
- (struct CGPoint { float x1; float x2; })convertScreenToBase:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGPoint { float x1; float x2; })convertBaseToScreen:(struct CGPoint { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })visibleRect;
- (struct CGSize { float x1; float x2; })availableScreenSize;
- (struct CGSize { float x1; float x2; })screenSize;
- (float)screenScale;
- (float)zoomedOutTileScale;
- (void)setTilePaintCountsVisible:(BOOL)arg1;
- (void)setTileBordersVisible:(BOOL)arg1;
- (void)setAcceleratedDrawingEnabled:(BOOL)arg1;
- (id)_newFirstResponderAfterResigning;
- (BOOL)makeFirstResponder:(id)arg1;
- (int)keyViewSelectionDirection;
- (id)firstResponder;
- (struct WKWindow { struct _WKObject { unsigned int x_1_1_1; struct _WKClassInfo {} *x_1_1_2; } x1; id x2; struct WKView {} *x3; struct WKView {} *x4; struct WKView {} *x5; }*)_windowRef;
- (id)rootLayer;
- (void)setNeedsDisplayInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setNeedsDisplay;
- (id)initWithLayer:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })frame;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (void)dealloc;
- (void)close;
- (id).cxx_construct;
- (id)description;
- (void)dumpTiles;
- (BOOL)keepsZoomedOutTiles;
- (void)setKeepsZoomedOutTiles:(BOOL)arg1;
- (BOOL)tilesOpaque;
- (void)setTilingMode:(int)arg1;
- (void)layoutTiles;
- (void)layoutTilesNowForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setScreenScale:(float)arg1;
- (void)setAvailableScreenSize:(struct CGSize { float x1; float x2; })arg1;
- (void)setScreenSize:(struct CGSize { float x1; float x2; })arg1;
- (void)sendMouseMoveEvent:(id)arg1 contentChange:(int*)arg2;
- (void)removeForegroundTiles;
- (void)setTilingDirection:(int)arg1;
- (void)setUseOrientationDependentFontAntialiasing:(BOOL)arg1;
- (void)removeAllTiles;
- (void)setTilesOpaque:(BOOL)arg1;
- (void)removeAllNonVisibleTiles;
- (void)setZoomedOutTileScale:(float)arg1;
- (void)setCurrentTileScale:(float)arg1;
- (void)setContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)didRotate;
- (void)willRotate;
- (void)setRootLayer:(id)arg1;
- (void)layoutTilesNow;
- (id)recursiveDescription;
- (void)makeKeyWindow;
- (oneway void)_webcore_releaseOnWebThread;
- (oneway void)release;

@end
