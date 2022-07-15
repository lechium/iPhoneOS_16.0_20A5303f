//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _LSDReadClient
{
}

- (void)getSystemContentStoreWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cf5e9
- (void)getSessionLanguagesForImproperlyLocalizedProcessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cf421
- (void)getSystemModeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cf385
- (void)getSettingsStoreConfigurationWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cf20c
- (void)getPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cf171
- (void)mapPlugInBundleIdentifiersToContainingBundleIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cea72
- (void)mapBundleIdentifiers:(id)arg1 orMachOUUIDs:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cdaa9
- (void)getResourceValuesForKeys:(id)arg1 URL:(id)arg2 preferredLocalizations:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cd451
- (void)getAllUserActivityTypesAndDomainNamesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cd1f8
- (void)getBoundIconInfoForDocumentProxy:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cce7c
- (void)getWhetherTypeIdentifier:(id)arg1 conformsToTypeIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ccdba
- (void)getRelatedTypesOfTypeWithIdentifier:(id)arg1 maximumDegreeOfSeparation:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000ccb34
- (void)getTypeRecordForImportedTypeWithIdentifier:(id)arg1 conformingToIdentifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cca57
- (void)getTypeRecordsWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cc946
- (void)getTypeRecordWithTag:(id)arg1 ofClass:(id)arg2 conformingToIdentifier:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000cc835
- (void)getTypeRecordsWithIdentifiers:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cc754
- (void)getTypeRecordWithIdentifier:(id)arg1 allowUndeclared:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cc66f
- (void)getExtensionPointRecordForCurrentProcessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cc518
- (void)getExtensionPointRecordWithIdentifier:(id)arg1 platform:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cc430
- (void)getBundleRecordForCoreTypesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cc378
- (void)getBundleProxyForCurrentProcessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cc1b3
- (void)getBundleRecordForCurrentProcessWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cc078
- (void)resolveQueries:(id)arg1 legacySPI:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00000000000cbc1b
- (void)getKnowledgeUUIDAndSequenceNumberWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cba67
- (void)getDiskUsage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000000cb899
- (void)getKernelPackageExtensionsWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cb7b0
- (void)getServerStoreNonBlockingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cb646
- (void)getServerStatusWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000cb5f9
- (void)willHandleInvocation:(id)arg1 isReply:(_Bool)arg2;	// IMP=0x00000000000cb53b

@end
