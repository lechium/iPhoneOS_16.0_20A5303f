//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface SHServerLyricsResponse : NSObject
{
    NSDictionary *_lyricsDictionary;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000012eda
@property(retain, nonatomic) NSDictionary *lyricsDictionary; // @synthesize lyricsDictionary=_lyricsDictionary;
- (id)itemForIdentifiers:(id)arg1;	// IMP=0x0010000000012c77
- (id)initWithLyricsDictionary:(id)arg1;	// IMP=0x0010000000012c0c

@end

