//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OfficeImport/OCDDelayedNodeContext-Protocol.h>

@class NSURL, OCDDelayedMedia, OISFUDataRepresentation;

@protocol OCDDelayedMediaContext <OCDDelayedNodeContext>
- (OISFUDataRepresentation *)dataRep;
- (_Bool)saveDelayedMedia:(OCDDelayedMedia *)arg1 toFile:(NSURL *)arg2;
@end
