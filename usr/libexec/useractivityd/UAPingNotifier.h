//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet;

@interface UAPingNotifier
{
    NSMutableSet *_pongItems;	// 8 = 0x8
    long long _pongCount;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000002c40
@property long long pongCount; // @synthesize pongCount=_pongCount;
@property(readonly, copy) NSMutableSet *pongItems; // @synthesize pongItems=_pongItems;
- (id)statusString;	// IMP=0x0010000000002b57
- (void)setItems:(id)arg1;	// IMP=0x00100000000024b5
- (id)items;	// IMP=0x00100000000024ad
- (_Bool)active;	// IMP=0x00100000000024a5
- (id)initWithManager:(id)arg1;	// IMP=0x0010000000002431

@end

