//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSURL;

@interface IPCLoadDirectionsMessage
{
    _Bool _originIsWatch;	// 8 = 0x8
    NSURL *_url;	// 16 = 0x10
    NSData *_routeContext;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000036aba
@property(copy, nonatomic) NSData *routeContext; // @synthesize routeContext=_routeContext;
@property(nonatomic) _Bool originIsWatch; // @synthesize originIsWatch=_originIsWatch;
@property(copy, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)description;	// IMP=0x00100000000369a7
- (id)dictionaryValue;	// IMP=0x0010000000036825
- (id)initWithDictionary:(id)arg1;	// IMP=0x001000000003669d

@end
