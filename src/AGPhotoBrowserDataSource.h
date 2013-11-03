//
//  AGPhotoBrowserDataSource.h
//  AGPhotoBrowser
//
//  Created by Hellrider on 7/28/13.
//  Copyright (c) 2013 Andrea Giavatto. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol AGPhotoBrowserDataSource <NSObject>

- (NSInteger)numberOfPhotosForPhotoBrowser:(AGPhotoBrowserView *)photoBrowser;
- (UIImage *)photoBrowser:(AGPhotoBrowserView *)photoBrowser imageAtIndex:(NSInteger)index;
@optional
- (void)photoBrowser:(AGPhotoBrowserView *)photoBrowser loadImageAtIndex:(NSInteger)index inView:(UIImageView *)imageview andRunCompletion:(void (^)(UIImage *image))completion;

- (NSString *)photoBrowser:(AGPhotoBrowserView *)photoBrowser titleForImageAtIndex:(NSInteger)index;
- (NSString *)photoBrowser:(AGPhotoBrowserView *)photoBrowser descriptionForImageAtIndex:(NSInteger)index;

@end
