//
//  OpenCVWrapper.h
//  OpenCVTest
//
//  Created by SybGMon on 2019/05/22.
//  Copyright © 2019 Sybrin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef struct CropRect {
    CGPoint topLeft;
    CGPoint topRight;
    CGPoint bottomLeft;
    CGPoint bottomRight;
} CropRect;

@interface OpenCVWrapper : NSObject

/// Test function to see if OpenCV is working
+(NSString *)openCVVersionString;

// Image enhancing functions
+(UIImage *)opCVGreyImage:(UIImage *)image;
+(UIImage *)opCVGaussianBlur:(UIImage *)image;
+(UIImage *)opCVEdgeDetection:(UIImage *)image;
+(UIImage *)opCVCanny:(UIImage *)image;
+(UIImage *)opBWImageOne:(UIImage *)image;
+(UIImage *)opBWImageTwo:(UIImage *)image;

// Edge detection functions
+(UIImage *)opCVFindEdges:(UIImage *)image;
+(UIImage *)opCVWarpAndTransformPerspective:(UIImage *)image :(CGPoint)pointA :(CGPoint)pointB :(CGPoint)pointC :(CGPoint)pointD;
+(NSArray<NSValue*>*)getEdgePoints:(UIImage *)image;
+(BOOL) isImageBlured:(UIImage *) image;

// +(UIImage *)docScanDetectedDocuemnt:(UIImage *)image;
// +(NSArray<NSValue*>*)sortEdgePoints:(NSArray<NSValue*>*)image;
// +(UIImage *)opCVflipImage:(UIImage *)image;
// +(UIImage *)opCVTransformImage:(UIImage *)originalImage :(CGPoint)pointA :(CGPoint)pointB :(CGPoint)pointC :(CGPoint)pointD;
// +(UIImage *)opCVTransformImageNew :(UIImage*)originalImage :(CGFloat)contentScale :(CGPoint)pointA :(CGPoint)pointB :(CGPoint)pointC :(CGPoint)pointD;

//NEW Stuff
//+(CropRect)smartDetectEdges:(UIImage *)originalImage :(CGRect)bounds :(CGRect)frame;
//+(UIImage *)smartCrop:(CropRect)cropRect :(UIImage*)originalImage :(CGRect)bounds;




@end

NS_ASSUME_NONNULL_END
