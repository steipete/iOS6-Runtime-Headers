/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator6.0.sdk/System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class WebBookmarkCollection, NSMutableArray, NSString;

@interface WebBookmarkList : NSObject  {
    NSMutableArray *_bookmarks;
    unsigned int _bookmarkCount;
    unsigned int _skipOffset;
    BOOL _customQuery;
    NSString *_query;
    unsigned int _folderID;
    WebBookmarkCollection *_collection;
}

@property(readonly) unsigned int folderID;


- (unsigned int)_reverseOrderIndex:(unsigned int)arg1;
- (void)_moveBookmarkAtIndex:(unsigned int)arg1 toIndex:(unsigned int)arg2;
- (id)initWithFolderID:(unsigned int)arg1 inCollection:(id)arg2 bookmarkCount:(unsigned int)arg3 skipOffset:(unsigned int)arg4 includeHidden:(BOOL)arg5;
- (id)initWithBookmarksWhere:(id)arg1 collection:(id)arg2 bookmarkCount:(unsigned int)arg3 skipOffset:(unsigned int)arg4;
- (unsigned int)folderID;
- (id)bookmarkArrayRequestingCount:(unsigned int)arg1;
- (id)bookmarkArray;
- (unsigned int)bookmarkCount;
- (BOOL)stepThroughIndex:(unsigned int)arg1;
- (id)bookmarkAtIndex:(unsigned int)arg1;
- (void)dealloc;

@end