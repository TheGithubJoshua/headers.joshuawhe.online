//
//     Generated by classdumpios 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface AKPolygonPointOfInterestHelper
{
}

+ (struct CGPoint)_pointForPointsControlOfPolygonWithNumberOfPoints:(unsigned long long)arg1 inAnnotation:(id)arg2 onPageController:(id)arg3;	// IMP=0x00800000000aff1d
+ (double)_degreesForPointsControlGivenPolygonWithNumberOfPoints:(unsigned long long)arg1;	// IMP=0x00800000000afecf
+ (double)_degreesBetweenPointsForPointsControl;	// IMP=0x00800000000afe93
+ (unsigned long long)numberOfPolygonPointsForControlPoint:(struct CGPoint)arg1 inAnnotation:(id)arg2 onPageController:(id)arg3;	// IMP=0x00800000000afb6e
+ (double)pointsControlPointDistanceFactor;	// IMP=0x00800000000afb60
+ (struct CGPoint)_concreteValidatePoint:(struct CGPoint)arg1 ofDraggableArea:(unsigned long long)arg2 forAnnotation:(id)arg3 onPageController:(id)arg4;	// IMP=0x00800000000af9d5
+ (unsigned long long)_concreteDraggableAreaForPointOfInterestWithIndex:(unsigned long long)arg1 ofAnnotation:(id)arg2 onPageController:(id)arg3;	// IMP=0x00800000000af998
+ (void)_concretePointsOfInterest:(id *)arg1 withVisualStyle:(id *)arg2 ofAnnotation:(id)arg3 pageControllerForPixelAlignment:(id)arg4;	// IMP=0x00800000000af63f
+ (unsigned long long)minPolygonPoints;	// IMP=0x00800000000af634
+ (unsigned long long)maxPolygonPoints;	// IMP=0x00800000000af629

@end
