//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _PASSqliteDatabase;
@protocol GDViewAccessAssertion;

__attribute__((visibility("hidden")))
@interface GDPageRankView : NSObject
{
    id <GDViewAccessAssertion> _accessAssertion;	// 8 = 0x8
    _PASSqliteDatabase *_db;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000025d83
- (id)pageRanksWithError:(id *)arg1;	// IMP=0x0000000000025bdf
- (id)initWithAccessAssertion:(id)arg1 database:(id)arg2;	// IMP=0x0000000000025b46

@end

