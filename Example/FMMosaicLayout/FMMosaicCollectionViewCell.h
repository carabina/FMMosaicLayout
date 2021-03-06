//
//  FMMosaicCollectionViewCell.h
//  FMLightboxMosaic
//
//  Created by Julian Villella on 2015-01-30.
//  Copyright (c) 2015 Fluid Media. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FMMosaicCollectionViewCell : UICollectionViewCell

+ (NSString *)reuseIdentifier;

@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;

@end
