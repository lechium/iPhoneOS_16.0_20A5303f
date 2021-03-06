//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSFileManager, NSString;

@interface APEncryptedFileManager : NSObject
{
    NSFileManager *_fileManager;	// 8 = 0x8
    NSString *_pathPrefix;	// 16 = 0x10
    NSString *_rootPath;	// 24 = 0x18
}

+ (_Bool)removeStorage;	// IMP=0x002000000002944c
+ (_Bool)areThereStoredItems;	// IMP=0x0010000000029323
+ (id)_applicationSupportSubdirectory:(id)arg1;	// IMP=0x0010000000028f0b
+ (void)setRootPath:(id)arg1;	// IMP=0x0010000000028dee
+ (id)_validatedPath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000287aa
+ (id)_rootSubdirectory;	// IMP=0x00100000000273c6
- (void).cxx_destruct;	// IMP=0x00200000000299fa
@property(readonly, nonatomic) NSString *rootPath; // @synthesize rootPath=_rootPath;
@property(retain, nonatomic) NSString *pathPrefix; // @synthesize pathPrefix=_pathPrefix;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (_Bool)_createDirectoriesForURL:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000029230
- (id)_makeApplicationSupportSubdirectory:(id)arg1;	// IMP=0x001000000002904a
- (id)_rootURL;	// IMP=0x0010000000028e02
- (_Bool)moveItemAtPath:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000028d0b
- (id)contentsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000028c9c
- (id)subpathsOfDirectoryAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000028c2d
- (id)_validatedFullURLForPath:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000028ab9
- (id)_validatedFullPathForPath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000289a6
- (id)_validatedPath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000285f9
- (void)getStorageSize:(unsigned long long *)arg1 allocatedSize:(unsigned long long *)arg2 files:(unsigned long long *)arg3;	// IMP=0x0010000000028000
- (CDUnknownBlockType)iterateObjectsIncludingFolders:(_Bool)arg1;	// IMP=0x0010000000027cc6
- (_Bool)touchFileAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000027c35
- (id)createdDateForFileAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000027bb4
- (id)lastModifiedDateForFileAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000027b33
- (id)fileForAppendingAtKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000279e9
- (id)fileForWritingAtKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002789f
- (id)fileForReadingAtKeyPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002760a
- (_Bool)removeObjectAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000275a7
- (_Bool)_fileExistsAtPath:(id)arg1 isDirectory:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x0010000000027541
- (_Bool)directoryExistsAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000273d3
- (_Bool)fileExistsAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000027257
- (Class)_classForEncryptedFile;	// IMP=0x0010000000027246
- (id)_dataStoredAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000271bd
- (_Bool)_storeData:(id)arg1 atPath:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000027129
- (id)objectStoredAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x001000000002708f
- (_Bool)storeObject:(id)arg1 atPath:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000027000
- (id)initWithPathPrefix:(id)arg1;	// IMP=0x0010000000026fec
- (id)initWithPathPrefix:(id)arg1 rootPath:(id)arg2;	// IMP=0x0010000000026ea3
- (id)init;	// IMP=0x0010000000026de6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

