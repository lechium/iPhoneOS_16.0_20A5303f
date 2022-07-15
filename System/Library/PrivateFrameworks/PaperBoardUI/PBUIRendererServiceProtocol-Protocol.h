//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, PBUICARendererImageRepresentation, UIColor;

@protocol PBUIRendererServiceProtocol
- (void)service_applyMaterialRecipe:(PBUICARendererImageRepresentation *)arg1 recipeName:(NSString *)arg2 containingBundleIdentifier:(NSString *)arg3 weighting:(double)arg4 downsampleFactor:(double)arg5 withReply:(void (^)(IOSurface *))arg6;
- (void)service_applyWallpaperTreatment:(PBUICARendererImageRepresentation *)arg1 needsLumaTreatment:(_Bool)arg2 needsDimmingTreatment:(_Bool)arg3 downsampleFactor:(double)arg4 averageColor:(UIColor *)arg5 withReply:(void (^)(IOSurface *))arg6;
@end
