//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSURLResult;

__attribute__((visibility("hidden")))
@interface VUIFamilySharingMediaEntitiesResponseMetadataParser : NSObject
{
    AMSURLResult *_result;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000073ff8
@property(retain, nonatomic) AMSURLResult *result; // @synthesize result=_result;
- (id)_parseOffsetFromMetaBag;	// IMP=0x0000000000073d01
- (id)_parseTotalFromMetaBag;	// IMP=0x0000000000073c0b
- (id)parseAMSURLResult:(id)arg1;	// IMP=0x0000000000073ac1
- (id)init;	// IMP=0x0000000000073a5e

@end

