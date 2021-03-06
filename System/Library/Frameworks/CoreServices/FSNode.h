//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface FSNode : NSObject
{
    NSURL *_url;	// 8 = 0x8
    unsigned long long _cacheExpiration;	// 16 = 0x10
    unsigned int _isDirectory:2;	// 24 = 0x18
    unsigned int _hasReferringAliasNode:1;	// 24 = 0x18
    unsigned int _canUseFileCache:1;	// 24 = 0x18
    unsigned int _isInitialized:1;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000000eb3f
+ (id)_resolvedNodeFromAliasFile:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x0010000000010532
+ (id)_resolvedURLFromAliasFile:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00100000000103cb
+ (id)systemDataVolumeNode;	// IMP=0x00100000000116c0
+ (id)prebootVolumeNode;	// IMP=0x00100000000115f2
+ (id)rootVolumeNode;	// IMP=0x0010000000011524
+ (_Bool)canReadMetadataOfURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2;	// IMP=0x0010000000012edd
+ (_Bool)canWriteURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2;	// IMP=0x0010000000012ec4
+ (_Bool)canReadURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2;	// IMP=0x0010000000012eab
+ (_Bool)canReadMetadataOfURL:(id)arg1 withAuditToken:(const CDStruct_4c969caf *)arg2;	// IMP=0x0010000000012ca7
+ (_Bool)canWriteURL:(id)arg1 withAuditToken:(const CDStruct_4c969caf *)arg2;	// IMP=0x0010000000012c8e
+ (_Bool)canReadURL:(id)arg1 withAuditToken:(const CDStruct_4c969caf *)arg2;	// IMP=0x0010000000012c75
+ (_Bool)canAccessURL:(id)arg1 fromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg2 operation:(const char *)arg3;	// IMP=0x0010000000012a7d
+ (_Bool)canAccessURL:(id)arg1 withAuditToken:(const CDStruct_4c969caf *)arg2 operation:(const char *)arg3;	// IMP=0x0010000000012962
+ (_Bool)getFileSystemRepresentation:(char [1024])arg1 forBookmarkData:(id)arg2;	// IMP=0x0010000000014506
+ (_Bool)isBookmarkDataFull:(id)arg1;	// IMP=0x001000000001447e
+ (_Bool)getVolumeIdentifier:(unsigned long long *)arg1 forBookmarkData:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000143f6
+ (id)nameForBookmarkData:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001426c
+ (id)pathForBookmarkData:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000014051
+ (unsigned char)compareBookmarkData:(id)arg1 toBookmarkData:(id)arg2;	// IMP=0x0010000000013e01
+ (id)injectSimulatorRootIntoBookmarkData:(id)arg1;	// IMP=0x00100000000139ef
+ (id)removeSimulatorRootFromBookmarkData:(id)arg1;	// IMP=0x001000000001385b
+ (id)simulatorRootPath;	// IMP=0x0010000000013718
- (void).cxx_destruct;	// IMP=0x000000000000eb47
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000000e92e
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000000e866
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000e650
- (id)redactedDescription;	// IMP=0x000000000000e5fb
- (id)description;	// IMP=0x000000000000e517
- (unsigned long long)hash;	// IMP=0x000000000000e4a1
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000000e2bd
- (void)prepareForReuse;	// IMP=0x000000000000e1f6
- (id)initWithURL:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000dcb7
- (id)initTemporaryNodeOnVolume:(id)arg1 flags:(unsigned int)arg2 fileDescriptor:(int *)arg3 error:(id *)arg4;	// IMP=0x000000000000f20f
- (id)initWithConfigurationString:(int)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000f12e
- (id)initWithDirectory:(unsigned long long)arg1 inDomain:(unsigned long long)arg2 lastPathComponent:(id)arg3 createIntermediateDirectories:(_Bool)arg4 flags:(unsigned int)arg5 error:(id *)arg6;	// IMP=0x000000000000ee50
- (id)initWithFileSystemRepresentation:(const char *)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000ecd2
- (id)initWithPath:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000eb57
- (_Bool)checkResourceIsReachableAndReturnError:(id *)arg1;	// IMP=0x000000000000ff76
- (id)sideFaultResourceValuesReturningError:(id *)arg1;	// IMP=0x000000000000fe40
- (void)setTemporaryResourceValue:(id)arg1 forKey:(id)arg2;	// IMP=0x000000000000fdd3
- (_Bool)getTemporaryResourceValue:(id *)arg1 forKey:(id)arg2;	// IMP=0x000000000000fdbb
- (void)removeCachedResourceValueForKey:(id)arg1;	// IMP=0x000000000000fd63
- (_Bool)setResourceValue:(id)arg1 forKey:(id)arg2 options:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x000000000000fbbe
- (_Bool)getResourceValue:(id *)arg1 forKey:(id)arg2 options:(unsigned char)arg3 error:(id *)arg4;	// IMP=0x000000000000f852
- (void)clearURLPropertyCacheIfStale;	// IMP=0x000000000000f7b3
@property(readonly, nonatomic) NSURL *URL;
- (id)temporaryDirectoryNodeWithFlags:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x00000000000107fc
- (id)resolvedNodeWithFlags:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x0000000000010708
- (void)setReferringAliasNode:(id)arg1;	// IMP=0x000000000001038c
@property(readonly, nonatomic) FSNode *referringAliasNode;
- (id)diskImageURLWithFlags:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x000000000001030c
- (id)volumeNodeWithFlags:(unsigned int)arg1 error:(id *)arg2;	// IMP=0x000000000001026f
- (id)childNodeWithRelativePath:(id)arg1 flags:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x000000000000ff9f
@property(readonly, nonatomic) _Bool hasHiddenExtension;
@property(readonly, nonatomic, getter=isHidden) _Bool hidden;
@property(readonly, nonatomic, getter=isRegularFile) _Bool regularFile;
@property(readonly, nonatomic) _Bool hasPackageBit;
@property(readonly, nonatomic, getter=isSideFault) _Bool sideFault;
@property(readonly, nonatomic, getter=isAliasFile) _Bool aliasFile;
@property(readonly, nonatomic, getter=isSymbolicLink) _Bool symbolicLink;
@property(readonly, nonatomic, getter=isResolvable) _Bool resolvable;
@property(readonly, nonatomic, getter=isExecutable) _Bool executable;
@property(readonly, nonatomic, getter=isBusyDirectory) _Bool busyDirectory;
@property(readonly, nonatomic, getter=isDirectory) _Bool directory;
- (_Bool)getIsDirectory_NoIO:(_Bool *)arg1;	// IMP=0x00000000000108f8
- (id)extensionWithError:(id *)arg1;	// IMP=0x0000000000011328
- (id)nameWithError:(id *)arg1;	// IMP=0x00000000000111e0
- (id)canonicalPathWithError:(id *)arg1;	// IMP=0x00000000000111c6
- (id)pathWithError:(id *)arg1;	// IMP=0x00000000000111af
- (_Bool)getFileSystemRepresentation:(char [1024])arg1 error:(id *)arg2;	// IMP=0x00000000000110f9
- (id)canonical:(_Bool)arg1 pathWithError:(id *)arg2;	// IMP=0x0000000000010f2f
@property(readonly, nonatomic, getter=isOnLocalVolume) _Bool onLocalVolume;
@property(readonly, nonatomic, getter=isOnDiskImage) _Bool onDiskImage;
- (_Bool)getVolumeIdentifier:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000011803
@property(readonly, nonatomic, getter=isMountTrigger) _Bool mountTrigger;
@property(readonly, nonatomic, getter=isVolume) _Bool volume;
- (_Bool)getOwnerUID:(unsigned int *)arg1 error:(id *)arg2;	// IMP=0x0000000000011a4d
- (_Bool)getFileIdentifier:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x00000000000119c8
- (_Bool)getInodeNumber:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000011943
- (_Bool)getDeviceNumber:(int *)arg1 error:(id *)arg2;	// IMP=0x00000000000118be
- (id)bundleIdentifierWithContext:(struct LSContext *)arg1 error:(id *)arg2;	// IMP=0x0000000000011d64
- (id)bundleIdentifierWithError:(id *)arg1;	// IMP=0x0000000000011d4d
- (id)bundleInfoDictionaryWithError:(id *)arg1;	// IMP=0x0000000000011c08
- (struct __CFBundle *)copyCFBundleWithError:(id *)arg1;	// IMP=0x0000000000011ad2
- (_Bool)getWriterBundleIdentifier:(id *)arg1 error:(id *)arg2;	// IMP=0x000000000001261d
- (_Bool)getHFSType:(unsigned int *)arg1 creator:(unsigned int *)arg2 error:(id *)arg3;	// IMP=0x0000000000012317
- (_Bool)getLength:(unsigned long long *)arg1 error:(id *)arg2;	// IMP=0x0000000000012292
- (_Bool)getContentModificationDate:(double *)arg1 error:(id *)arg2;	// IMP=0x000000000001227e
- (_Bool)getCreationDate:(double *)arg1 error:(id *)arg2;	// IMP=0x0000000000012020
- (_Bool)setFinderInfo:(const CDUnion_739f5cf2 *)arg1 error:(id *)arg2;	// IMP=0x00000000000127c4
- (_Bool)getFinderInfo:(CDUnion_739f5cf2 *)arg1 error:(id *)arg2;	// IMP=0x000000000001266c
- (_Bool)canReadMetadataFromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg1;	// IMP=0x0000000000012e34
- (_Bool)canWriteFromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg1;	// IMP=0x0000000000012dbd
- (_Bool)canReadFromSandboxWithAuditToken:(const CDStruct_4c969caf *)arg1;	// IMP=0x0000000000012d46
- (_Bool)canReadMetadataWithAuditToken:(const CDStruct_4c969caf *)arg1;	// IMP=0x0000000000012bfe
- (_Bool)canWriteWithAuditToken:(const CDStruct_4c969caf *)arg1;	// IMP=0x0000000000012b87
- (_Bool)canReadWithAuditToken:(const CDStruct_4c969caf *)arg1;	// IMP=0x0000000000012b10
- (_Bool)setExtendedAttribute:(id)arg1 name:(id)arg2 options:(int)arg3 error:(id *)arg4;	// IMP=0x0000000000013439
- (id)extendedAttributeWithName:(id)arg1 options:(int)arg2 error:(id *)arg3;	// IMP=0x0000000000012f7c
- (id)initByResolvingBookmarkData:(id)arg1 relativeToNode:(id)arg2 bookmarkDataIsStale:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x0000000000014024
- (id)initByResolvingBookmarkData:(id)arg1 options:(unsigned long long)arg2 relativeToNode:(id)arg3 bookmarkDataIsStale:(_Bool *)arg4 error:(id *)arg5;	// IMP=0x0000000000013e1f
- (id)bookmarkDataWithOptions:(unsigned long long)arg1 relativeToNode:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000013b71
- (id)bookmarkDataRelativeToNode:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000013b54

@end

