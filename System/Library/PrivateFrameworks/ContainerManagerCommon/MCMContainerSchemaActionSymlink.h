//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface MCMContainerSchemaActionSymlink
{
    NSURL *_linkURL;	// 8 = 0x8
    NSString *_targetPath;	// 16 = 0x10
}

+ (id)actionIdentifier;	// IMP=0x0010000000078b85
- (void).cxx_destruct;	// IMP=0x0000000000078861
- (_Bool)performWithError:(id *)arg1;	// IMP=0x000000000007844c
- (id)description;	// IMP=0x000000000007837f
- (id)initWithSourcePathArgument:(id)arg1 destinationPathArgument:(id)arg2 context:(id)arg3;	// IMP=0x0000000000078262

@end
