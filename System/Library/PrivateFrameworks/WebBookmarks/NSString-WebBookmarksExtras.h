//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@class NSURL;

@interface NSString (WebBookmarksExtras)
@property(readonly, nonatomic) NSURL *wb_bestURLForUserTypedString;
- (id)wb_stringByRedactingBookmarkDAVServerID;	// IMP=0x00300000000521ca
- (id)_wb_stringByDeletingTrailingSlash;	// IMP=0x0030000000052164
- (id)_wb_stringByStandardizingDAVServerID;	// IMP=0x00300000000520c0
- (_Bool)_webBookmarks_hasCaseInsensitivePrefix:(id)arg1;	// IMP=0x0030000000052090
@end
