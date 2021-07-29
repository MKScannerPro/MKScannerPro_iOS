//
//  MKSPScanPageCell.m
//  MKScannerPro_Example
//
//  Created by aa on 2021/7/14.
//  Copyright © 2021 aadyx2007@163.com. All rights reserved.
//

#import "MKSPScanPageCell.h"

#import "Masonry.h"

#import "MKMacroDefines.h"
#import "NSString+MKAdd.h"

#import "MKSPScanPageModel.h"

@interface MKSPScanPageCell ()

@property (nonatomic, strong)UILabel *msgLabel;

@property (nonatomic, strong)UILabel *rightMsgLabel;

@end

@implementation MKSPScanPageCell

+ (MKSPScanPageCell *)initCellWithTableView:(UITableView *)tableView {
    MKSPScanPageCell *cell = [tableView dequeueReusableCellWithIdentifier:@"MKSPScanPageCellIdenty"];
    if (!cell) {
        cell = [[MKSPScanPageCell alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:@"MKSPScanPageCellIdenty"];
    }
    return cell;
}

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    if (self = [super initWithStyle:style reuseIdentifier:reuseIdentifier]) {
        [self.contentView addSubview:self.msgLabel];
        [self.contentView addSubview:self.rightMsgLabel];
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    [self.rightMsgLabel mas_remakeConstraints:^(MASConstraintMaker *make) {
        make.right.mas_equalTo(-15.f);
        make.width.mas_equalTo(80.f);
        make.centerY.mas_equalTo(self.contentView.mas_centerY);
        make.height.mas_equalTo(MKFont(12.f).lineHeight);
    }];
    [self.msgLabel mas_remakeConstraints:^(MASConstraintMaker *make) {
        make.left.mas_equalTo(15.f);
        make.right.mas_equalTo(self.rightMsgLabel.mas_left).mas_offset(-5.f);
        make.centerY.mas_equalTo(self.contentView.mas_centerY);
        make.height.mas_equalTo(MKFont(14.f).lineHeight);
    }];
}

#pragma mark - setter
- (void)setDataModel:(MKSPScanPageModel *)dataModel {
    _dataModel = nil;
    _dataModel = dataModel;
    if (!_dataModel || ![_dataModel isKindOfClass:MKSPScanPageModel.class]) {
        return;
    }
    self.msgLabel.text = (ValidStr(_dataModel.deviceName) ? _dataModel.deviceName : @"N/A");
    self.rightMsgLabel.text = [NSString stringWithFormat:@"%ld%@",(long)_dataModel.rssi,@"dBm"];
}

#pragma mark - getter
- (UILabel *)msgLabel {
    if (!_msgLabel) {
        _msgLabel = [[UILabel alloc] init];
        _msgLabel.textColor = DEFAULT_TEXT_COLOR;
        _msgLabel.textAlignment = NSTextAlignmentLeft;
        _msgLabel.font = MKFont(14.f);
    }
    return _msgLabel;
}

- (UILabel *)rightMsgLabel {
    if (!_rightMsgLabel) {
        _rightMsgLabel = [[UILabel alloc] init];
        _rightMsgLabel.textColor = DEFAULT_TEXT_COLOR;
        _rightMsgLabel.textAlignment = NSTextAlignmentRight;
        _rightMsgLabel.font = MKFont(12.f);
    }
    return _rightMsgLabel;
}

@end
