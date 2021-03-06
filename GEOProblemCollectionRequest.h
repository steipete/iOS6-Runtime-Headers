/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSString, NSMutableArray;

@interface GEOProblemCollectionRequest : PBRequest  {
    NSString *_countryCode;
    NSString *_hwMachine;
    NSString *_inputLanguage;
    NSMutableArray *_requestElements;
}

@property(retain) NSMutableArray * requestElements;
@property(readonly) BOOL hasHwMachine;
@property(retain) NSString * hwMachine;
@property(readonly) BOOL hasCountryCode;
@property(retain) NSString * countryCode;
@property(readonly) BOOL hasInputLanguage;
@property(retain) NSString * inputLanguage;


- (id)requestElementAtIndex:(unsigned int)arg1;
- (void)addRequestElement:(id)arg1;
- (id)hwMachine;
- (BOOL)hasHwMachine;
- (void)setHwMachine:(id)arg1;
- (id)inputLanguage;
- (BOOL)hasInputLanguage;
- (void)setInputLanguage:(id)arg1;
- (BOOL)hasCountryCode;
- (id)requestElements;
- (void)clearRequestElements;
- (unsigned int)requestElementsCount;
- (void)setRequestElements:(id)arg1;
- (void)copyTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (Class)responseClass;
- (void)writeTo:(id)arg1;
- (unsigned int)requestTypeCode;
- (id)countryCode;
- (void)setCountryCode:(id)arg1;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)description;
- (id)dictionaryRepresentation;

@end
