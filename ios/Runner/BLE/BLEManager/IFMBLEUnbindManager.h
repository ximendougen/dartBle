//
//  IFMBLEUnbindManager.h
//  IFMApp
//
//  Created by huoguanghua on 16/5/24.
//  Copyright © 2016年 Infomedia. All rights reserved.
//

#import "IFMBLEManager.h"

@interface IFMBLEUnbindManager : IFMBLEManager <IFMBLEManager>
@property (nonatomic, assign)   BOOL    needAuthorize;
@end
