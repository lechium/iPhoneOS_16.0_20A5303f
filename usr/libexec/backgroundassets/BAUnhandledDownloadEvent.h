//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BADownload;

@interface BAUnhandledDownloadEvent : NSObject
{
    long long _type;	// 8 = 0x8
    BADownload *_download;	// 16 = 0x10
}

+ (id)classesForSerialization;	// IMP=0x002000000001d1fb
+ (_Bool)supportsSecureCoding;	// IMP=0x001000000001d1f3
- (void).cxx_destruct;	// IMP=0x002000000001d6a2
@property(retain) BADownload *download; // @synthesize download=_download;
@property long long type; // @synthesize type=_type;
- (id)description;	// IMP=0x001000000001d5b1
- (id)typeString;	// IMP=0x001000000001d579
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000001d4dc
- (id)initWithCoder:(id)arg1;	// IMP=0x001000000001d3eb
- (id)initWithEventType:(long long)arg1 download:(id)arg2;	// IMP=0x001000000001d364

@end
