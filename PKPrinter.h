/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/PrintKit.framework/PrintKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableSet, NSString, NSDictionary, NSNumber, NSMutableDictionary;

@interface PKPrinter : NSObject  {
    NSString *name;
    int type;
    int accessState;
    NSDictionary *printInfoSupported;

  /* Error parsing encoded ivar type info: ^{_http_s=iiiiiiii{sockaddr_in=CCS{in_addr=I}[8c]}[256c][27[256c]]*iii[2048c]i{_cups_md5_state_s=[2I][4I][64C]}[256c]i^{SSLContext}i^{fd_set}i*[256c][256c]iq^(_http_addr_u)^{http_addrlist_s}[2048c]i**^{__CFArray}^?^vdi} */
    struct _http_s { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; struct sockaddr_in { unsigned char x_9_1_1; unsigned char x_9_1_2; unsigned short x_9_1_3; struct in_addr { unsigned int x_4_2_1; } x_9_1_4; BOOL x_9_1_5[8]; } x9; BOOL x10[256]; BOOL x11[27][256]; char *x12; int x13; int x14; int x15; BOOL x16[2048]; int x17; struct _cups_md5_state_s { unsigned int x_18_1_1[2]; unsigned int x_18_1_2[4]; unsigned char x_18_1_3[64]; } x18; BOOL x19[256]; int x20; struct SSLContext {} *x21; int x22; struct fd_set {} *x23; int x24; char *x25; BOOL x26[256]; BOOL x27[256]; int x28; long long x29; union { /* Warning: Unrecognized filer type: '_' using 'void*' */ void*x_30_1_1; void*x_30_1_2; void*x_30_1_3; void*x_30_1_4; void*x_30_1_5; void*x_30_1_6; void*x_30_1_7; double x_30_1_8; double x_30_1_9; const void*x_30_1_10; void*x_30_1_11; } *x30; struct http_addrlist_s {} *x31; BOOL x32[2048]; int x33; char *x34; char *x35; struct __CFArray {} *x36; int (*x37)(); void *x38; double x39; int x40; } *job_http;

    NSMutableDictionary *privateData;
    NSMutableSet *mediaReady;
    NSMutableDictionary *specialFeedOrientation;
    int maxPDFKBytes;
    int maxJPEGKBytes;
    int maxJPEGXDimension;
    int maxJPEGYDimension;
    int maxCopies;
    int preferred_landscape;
    BOOL isLocal;
    BOOL hasIdentifyPrinterOp;
    int kind;
}

@property int accessState;
@property(retain) NSDictionary * TXTRecord;
@property(retain) NSString * hostname;
@property(retain) NSNumber * port;
@property(readonly) NSString * scheme;
@property(readonly) NSString * name;
@property(readonly) int kind;
@property(readonly) int type;
@property(readonly) int accessState;
@property(readonly) BOOL hasPrintInfoSupported;
@property(readonly) NSDictionary * printInfoSupported;
@property(readonly) BOOL isAdobeRGBSupported;
@property BOOL isLocal;
@property(readonly) BOOL isIPPS;
@property(readonly) NSString * uuid;
@property(readonly) BOOL hasIdentifyPrinterOp;

+ (struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; }*)getAttributes:(const char **)arg1 count:(int)arg2 fromURI:(id)arg3;
+ (id)nameForHardcodedURI:(id)arg1;
+ (id)hardcodedURIs;
+ (id)requiredPDL;
+ (BOOL)urfIsOptional;
+ (id)printerWithName:(id)arg1;
+ (BOOL)printerLookupWithName:(id)arg1 andTimeout:(double)arg2;

- (id)uuid;
- (struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; }*)newMediaColFromPaper:(id)arg1 Source:(id)arg2 Type:(id)arg3 DoMargins:(BOOL)arg4;
- (void)setPort:(id)arg1;
- (void)setHostname:(id)arg1;
- (void)resolve;
- (void)setTXTRecord:(id)arg1;
- (id)privateObjectForKey:(id)arg1;
- (void)setAccessState:(int)arg1;
- (BOOL)hasIdentifyPrinterOp;
- (BOOL)isAdobeRGBSupported;
- (void)checkOperations:(struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; }*)arg1;
- (void)identifySelf;
- (int)feedOrientation:(id)arg1;
- (id)location;
- (void)setPrivateObject:(id)arg1 forKey:(id)arg2;
- (struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; }*)createRequest:(id)arg1 ofType:(id)arg2 url:(id)arg3;
- (id)localName;
- (void)aggdAppsAndPrinters;
- (int)finalizeJob:(int)arg1;
- (id)printInfoSupported;
- (struct _ipp_s { int x1; union _ipp_request_u { struct { unsigned char x_1_2_1[2]; int x_1_2_2; int x_1_2_3; } x_2_1_1; struct { unsigned char x_2_2_1[2]; int x_2_2_2; int x_2_2_3; } x_2_1_2; struct { unsigned char x_3_2_1[2]; int x_3_2_2; int x_3_2_3; } x_2_1_3; struct { unsigned char x_4_2_1[2]; int x_4_2_2; int x_4_2_3; } x_2_1_4; } x2; struct _ipp_attribute_s {} *x3; struct _ipp_attribute_s {} *x4; struct _ipp_attribute_s {} *x5; int x6; struct _ipp_attribute_s {} *x7; int x8; }*)getPrinterAttributes;
- (id)displayName;
- (void)reconfirmWithForce:(BOOL)arg1;
- (void)setAccessStateFromTXT:(id)arg1;
- (void)updateType;
- (id)TXTRecord;
- (BOOL)isBonjour;
- (BOOL)isIPPS;
- (id)initWithName:(id)arg1 TXTRecord:(id)arg2;
- (void)setIsLocal:(BOOL)arg1;
- (id)initWithName:(id)arg1 TXT:(id)arg2;
- (BOOL)isLocal;
- (id)hostname;
- (void)dealloc;
- (id)port;
- (id)scheme;
- (id)name;
- (id)description;
- (int)sendData:(const char *)arg1 ofLength:(int)arg2;
- (int)printURL:(id)arg1 ofType:(id)arg2 printSettings:(id)arg3;
- (int)abortJob;
- (int)finishJob;
- (int)startJob:(id)arg1 ofType:(id)arg2;
- (id)matchedPaper:(id)arg1 preferBorderless:(BOOL)arg2 withDuplexMode:(id)arg3 didMatch:(BOOL*)arg4;
- (void)unlockWithCompletionHandler:(id)arg1;
- (int)accessState;
- (int)kind;
- (void)cancelUnlock;
- (id)paperListForDuplexMode:(id)arg1;
- (BOOL)isPaperReady:(id)arg1;
- (BOOL)knowsReadyPaperList;
- (BOOL)hasPrintInfoSupported;
- (BOOL)resolveWithTimeout:(int)arg1;
- (int)type;
- (BOOL)isEqual:(id)arg1;

@end
