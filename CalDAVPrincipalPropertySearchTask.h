/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/CalDAV.framework/CalDAV
 */

@class NSSet, CalDAVPrincipalSearchPropertySet;

@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask  {
    NSSet *_searchTypes;
    NSSet *_searchStrings;
    CalDAVPrincipalSearchPropertySet *_serverSupportSet;
    void *_searchContext;
}

@property void* searchContext;
@property(retain) NSSet * searchTypes;
@property(retain) NSSet * searchStrings;
@property(retain) CalDAVPrincipalSearchPropertySet * serverSupportSet;

+ (id)_propertiesToFindForServerSupportSet:(id)arg1;

- (id)initWithSearchStrings:(id)arg1 searchTypes:(id)arg2 serverSupportSet:(id)arg3 atURL:(id)arg4;
- (id)searchStrings;
- (id)serverSupportSet;
- (id)searchTypes;
- (void)setSearchTypes:(id)arg1;
- (void)setServerSupportSet:(id)arg1;
- (void)setSearchStrings:(id)arg1;
- (id)searchItems;
- (void*)searchContext;
- (void)setSearchContext:(void*)arg1;
- (id)extraAttributes;
- (void)dealloc;

@end
