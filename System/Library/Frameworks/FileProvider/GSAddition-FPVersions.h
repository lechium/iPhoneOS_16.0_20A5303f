//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GenerationalStorage/GSAddition.h>

@class NSPersonNameComponents, NSString;

@interface GSAddition (FPVersions)
@property(readonly, nonatomic) NSPersonNameComponents *fp_lastEditorNameComponents;
@property(readonly, nonatomic) NSString *fp_lastEditorDeviceName;
- (_Bool)fp_markResolvedWithError:(id *)arg1;	// IMP=0x00300000000c7275
- (_Bool)_fp_markResolvedWithError:(id *)arg1;	// IMP=0x00300000000c71bf
- (_Bool)shouldBeForwardedToFileProvider;	// IMP=0x00300000000c707b
- (id)conflictLoser;	// IMP=0x00300000000c6f60
@end
