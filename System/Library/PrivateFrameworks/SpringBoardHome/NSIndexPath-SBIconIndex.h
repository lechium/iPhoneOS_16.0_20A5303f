//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSIndexPath.h>

@interface NSIndexPath (SBIconIndex)
+ (id)sb_indexPathWithFolderIconIndex:(unsigned long long)arg1 folderListIndex:(unsigned long long)arg2 listIndex:(unsigned long long)arg3;	// IMP=0x008000000023a5c3
+ (id)sb_indexPathWithListIndex:(unsigned long long)arg1;	// IMP=0x008000000023a5b1
+ (id)indexPathWithFolderIconIndex:(unsigned long long)arg1 folderListIndex:(unsigned long long)arg2 iconIndex:(unsigned long long)arg3 listIndex:(unsigned long long)arg4;	// IMP=0x008000000023a549
+ (id)indexPathWithIconIndex:(unsigned long long)arg1 listIndex:(unsigned long long)arg2;	// IMP=0x008000000023a4e9
- (id)sb_iconPathDescription;	// IMP=0x001000000023ade3
- (id)sb_indexPathByReplacingLastIconIndex:(unsigned long long)arg1;	// IMP=0x001000000023ad84
- (_Bool)sb_isOnSameListAsIndexPath:(id)arg1;	// IMP=0x001000000023acf3
- (id)sb_indexPathByAddingPathComponentWithListIndex:(unsigned long long)arg1 iconIndex:(unsigned long long)arg2;	// IMP=0x001000000023ac84
- (id)sb_indexPathByAddingIndexPath:(id)arg1;	// IMP=0x001000000023ab8d
- (id)sb_lastIconPathComponent;	// IMP=0x001000000023aad7
- (id)sb_indexPathByRemovingLastIconIndex;	// IMP=0x001000000023aa8c
- (id)sb_indexPathByRemovingLastIconPathComponent;	// IMP=0x001000000023aa34
- (id)sb_indexPathByRemovingFirstIconPathComponent;	// IMP=0x001000000023a948
- (id)sb_firstIconPathComponent;	// IMP=0x001000000023a897
- (id)sb_iconRelativePathComponents;	// IMP=0x001000000023a76c
- (unsigned long long)sb_lastIconIndex;	// IMP=0x001000000023a725
- (unsigned long long)sb_lastListIndex;	// IMP=0x001000000023a6ed
- (unsigned long long)sb_firstIconIndex;	// IMP=0x001000000023a6db
- (unsigned long long)sb_firstListIndex;	// IMP=0x001000000023a6c9
- (unsigned long long)sb_iconPathCount;	// IMP=0x001000000023a6b3
- (unsigned long long)sbListIndex;	// IMP=0x001000000023a66f
- (unsigned long long)sbIconIndex;	// IMP=0x001000000023a627
@end

