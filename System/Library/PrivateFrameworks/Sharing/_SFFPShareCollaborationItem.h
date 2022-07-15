//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "SFCollaborationItem.h"

@class LPLinkMetadata, NSArray, NSItemProvider, NSString, NSURL, NSUUID, SFCollaborationCloudSharingResult, SFCollaborationMetadata, SFCollaborationShareOptions;

__attribute__((visibility("hidden")))
@interface _SFFPShareCollaborationItem : SFCollaborationItem
{
    _Bool _isiCloudDrive;	// 120 = 0x78
    _Bool _isShared;	// 121 = 0x79
    NSURL *_fileURL;	// 128 = 0x80
}

- (void).cxx_destruct;	// IMP=0x000000000005707a
@property(readonly, nonatomic) _Bool isShared; // @synthesize isShared=_isShared;
@property(readonly, nonatomic) _Bool isiCloudDrive; // @synthesize isiCloudDrive=_isiCloudDrive;
@property(readonly, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id)_defaultLoadingOptionsSummary;	// IMP=0x0000000000056fec
@property(readonly, nonatomic) _Bool isCollaborativeURL;
- (void)_loadMetadataIfNeeded;	// IMP=0x0000000000056df9
@property(readonly, copy, nonatomic) NSString *additionalContentIdentifier;
- (id)initWithFileURL:(id)arg1 activityItem:(id)arg2 defaultCollaboration:(_Bool)arg3;	// IMP=0x0000000000056ba7

// Remaining properties
@property(readonly, nonatomic) id activityItem;
@property(retain, nonatomic) SFCollaborationCloudSharingResult *cloudSharingResult;
@property(readonly, copy, nonatomic) NSString *contentIdentifier;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, nonatomic) _Bool defaultCollaboration;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSUUID *identifier;
@property(readonly, nonatomic) _Bool isLoading;
@property(readonly, nonatomic) NSItemProvider *itemProvider;
@property(readonly, nonatomic) LPLinkMetadata *linkMetadata;
@property(readonly, nonatomic) SFCollaborationMetadata *metadata;
@property(copy, nonatomic) NSArray *options;
@property(readonly, nonatomic) id placeholderActivityItem;
@property(readonly, copy, nonatomic) NSArray *sendCopyItems;
@property(copy, nonatomic) SFCollaborationShareOptions *shareOptions;
@property(readonly) Class superclass;
@property(readonly, nonatomic) long long type;

@end
