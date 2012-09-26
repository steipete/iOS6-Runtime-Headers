/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIPDFDocument, NSObject<UIWebPDFSearchOperationDelegate>, NSString, NSMutableArray;

@interface UIWebPDFSearchOperation : NSOperation  {
    NSMutableArray *_results;
    unsigned int _pageIndex;
    unsigned int _numberOfResultsToSkip;
    unsigned int _totalResultsCount;
    unsigned int _currentPageResultCount;
    BOOL _complete;
    unsigned int startingPageIndex;
    UIPDFDocument *documentToSearch;
    NSObject<UIWebPDFSearchOperationDelegate> *searchDelegate;
    float documentScale;
    NSString *searchString;
    unsigned int resultLimit;
}

@property NSObject<UIWebPDFSearchOperationDelegate> * searchDelegate;
@property(readonly) unsigned int currentPageResultCount;
@property(retain) UIPDFDocument * documentToSearch;
@property(readonly) unsigned int currentPageIndex;
@property unsigned int startingPageIndex;
@property unsigned int numberOfResultsToSkip;
@property unsigned int resultLimit;
@property(retain) NSString * searchString;
@property float documentScale;


- (id)init;
- (void)dealloc;
- (void)setNumberOfResultsToSkip:(unsigned int)arg1;
- (unsigned int)numberOfResultsToSkip;
- (id)searchDelegate;
- (void)setStartingPageIndex:(unsigned int)arg1;
- (unsigned int)startingPageIndex;
- (unsigned int)currentPageResultCount;
- (void)_notifyDelegateOfStatus;
- (void)_search;
- (id)sanitizedAttributedStringForAttributedString:(id)arg1;
- (id)documentToSearch;
- (id)searchString;
- (struct __CTFont { }*)_fontWithPDFFont:(struct CGPDFFont { }*)arg1 size:(float)arg2;
- (BOOL)_hitSearchLimit;
- (void)setSearchDelegate:(id)arg1;
- (unsigned int)resultLimit;
- (void)setSearchString:(id)arg1;
- (void)setResultLimit:(unsigned int)arg1;
- (unsigned int)currentPageIndex;
- (void)setDocumentScale:(float)arg1;
- (void)setDocumentToSearch:(id)arg1;
- (float)documentScale;
- (void)cancel;
- (void)main;

@end
