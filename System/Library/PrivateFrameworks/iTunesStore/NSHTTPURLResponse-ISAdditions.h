//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSHTTPURLResponse.h>

@interface NSHTTPURLResponse (ISAdditions)
- (long long)itunes_maxExpectedContentLength;	// IMP=0x006000000005437e
- (id)_iTunesStore_valueForHTTPHeader:(id)arg1;	// IMP=0x00600000000542ac
- (double)itunes_expirationInterval;	// IMP=0x0060000000054244
- (double)expirationInterval;	// IMP=0x0060000000054191
- (id)itunes_expirationDate;	// IMP=0x006000000005415d
- (id)_dateFromExpires;	// IMP=0x0060000000054124
- (_Bool)_getCacheControlMaxAge:(double *)arg1;	// IMP=0x0060000000053f9b
@end

