//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface (null) (Message)
- (void)accountDidChange:(id)arg1;	// IMP=0x00200000002ac050
- (void)stopBackFillingMessageBodyDownload;	// IMP=0x00200000002ad1f0
- (void)startBackFillingMessageBodyDownloadWithRequest:(id)arg1;	// IMP=0x00200000002ad0c0
- (void)fetchNow:(int)arg1 withMailboxes:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00200000002acec0
- (void)fetchNow:(int)arg1;	// IMP=0x00200000002acc80
- (void)checkForNewLocalActions;	// IMP=0x00200000002af640
- (void)addLocalAction:(id)arg1;	// IMP=0x00200000002af500
- (id)fetchSeparatorChar;	// IMP=0x00200000002aedc0
- (void)localMailboxesDidChange;	// IMP=0x00200000002aeac0
- (_Bool)renameMailbox:(id)arg1 toMailbox:(id)arg2;	// IMP=0x00200000002ae870
- (_Bool)deleteMailbox:(id)arg1;	// IMP=0x00200000002ae090
- (_Bool)createMailbox:(id)arg1;	// IMP=0x00200000002ad8f0
@end
