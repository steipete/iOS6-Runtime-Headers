/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@class NSNumber, NSString, NSDate;

@interface DAStatusReport : NSObject  {
    NSString *_persistentUUID;
    NSString *_displayName;
    NSString *_accountType;
    NSNumber *_timeSpan;
    NSNumber *_timeInNetworking;
    NSNumber *_averageHBI;
    NSNumber *_successfulRequests;
    NSNumber *_failedNetworkRequests;
    NSNumber *_failedProtocolRequests;
    NSNumber *_downloadedElements;
    NSNumber *_falseMoreAvailableCount;
    NSDate *_creationDate;
    int _numHBIDataPoints;
}

@property(retain) NSString * persistentUUID;
@property(retain) NSString * displayName;
@property(retain) NSString * accountType;
@property(retain) NSNumber * timeSpan;
@property(retain) NSNumber * timeInNetworking;
@property(retain) NSNumber * averageHBI;
@property(retain) NSNumber * successfulRequests;
@property(retain) NSNumber * failedNetworkRequests;
@property(retain) NSNumber * failedProtocolRequests;
@property(retain) NSNumber * downloadedElements;
@property(retain) NSNumber * falseMoreAvailableCount;


- (void)noteTimeSpentInNetworking:(double)arg1;
- (void)noteFailedProtocolRequest;
- (void)noteFailedNetworkRequest;
- (void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (void)noteFalseMoreAvailableResponse;
- (void)noteNewHBIDataPoint:(int)arg1;
- (void)mergeStatusReport:(id)arg1;
- (id)falseMoreAvailableCount;
- (id)downloadedElements;
- (id)failedProtocolRequests;
- (id)failedNetworkRequests;
- (id)successfulRequests;
- (id)averageHBI;
- (id)timeInNetworking;
- (id)timeSpan;
- (id)persistentUUID;
- (void)setFalseMoreAvailableCount:(id)arg1;
- (void)setDownloadedElements:(id)arg1;
- (void)setFailedProtocolRequests:(id)arg1;
- (void)setFailedNetworkRequests:(id)arg1;
- (void)setSuccessfulRequests:(id)arg1;
- (void)setAverageHBI:(id)arg1;
- (void)setTimeInNetworking:(id)arg1;
- (void)setTimeSpan:(id)arg1;
- (void)setAccountType:(id)arg1;
- (void)setPersistentUUID:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (id)accountType;
- (id)displayName;
- (id)init;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;

@end
