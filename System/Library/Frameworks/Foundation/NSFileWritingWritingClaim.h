//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSFileAccessNode, NSURL;

__attribute__((visibility("hidden")))
@interface NSFileWritingWritingClaim
{
    NSURL *_url1;	// 208 = 0xd0
    _Bool _url1DidChange;	// 216 = 0xd8
    unsigned long long _options1;	// 224 = 0xe0
    NSURL *_url2;	// 232 = 0xe8
    _Bool _url2DidChange;	// 240 = 0xf0
    unsigned long long _options2;	// 248 = 0xf8
    NSFileAccessNode *_location1;	// 256 = 0x100
    NSFileAccessNode *_location2;	// 264 = 0x108
}

+ (_Bool)supportsSecureCoding;	// IMP=0x006000000062dee0
- (void)protectFilesAgainstEviction;	// IMP=0x000000000062f7b4
- (id)allURLs;	// IMP=0x000000000062f74b
- (_Bool)blocksClaim:(id)arg1;	// IMP=0x000000000062f6d5
- (void)itemAtLocation:(id)arg1 wasReplacedByItemAtLocation:(id)arg2;	// IMP=0x000000000062f63f
- (void)devalueSelf;	// IMP=0x000000000062f4db
- (void)invokeClaimer;	// IMP=0x000000000062f17d
- (void)resolveURLsThenContinueInvokingClaimer:(CDUnknownBlockType)arg1;	// IMP=0x000000000062eeca
- (void)granted;	// IMP=0x000000000062e7d8
- (_Bool)isBlockedByWritingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000062e749
- (_Bool)isBlockedByReadingItemAtLocation:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x000000000062e6a6
- (_Bool)evaluateSelfWithRootNode:(id)arg1 checkSubarbitrability:(_Bool)arg2;	// IMP=0x000000000062e447
- (void)forwardUsingConnection:(id)arg1 crashHandler:(CDUnknownBlockType)arg2;	// IMP=0x000000000062dee8
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000062dd1f
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000062dba5
- (void)dealloc;	// IMP=0x000000000062db2a
- (id)initWithPurposeID:(id)arg1 url:(id)arg2 options:(unsigned long long)arg3 url:(id)arg4 options:(unsigned long long)arg5 claimer:(CDUnknownBlockType)arg6;	// IMP=0x000000000062da84

@end

