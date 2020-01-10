#ifndef SAXMLPROTOCOLMAKER_H
#define SAXMLPROTOCOLMAKER_H
#include "SAAbstractProtocolMaker.h"


#ifndef SA_XML_FUNTION_2D_POINTS_DESCRIBE
#define SA_XML_FUNTION_2D_POINTS_DESCRIBE "2d-points-describe"
#endif
/**
 * @brief 组成sa xml协议的实现类
 * 对应
 */
class SAXMLProtocolMaker : public SAAbstractProtocolMaker
{
public:
    SAXMLProtocolMaker();
    ~SAXMLProtocolMaker();
    //制造2维点数组描述的协议 - 类似pandas.DataFrame.describe
    virtual QByteArray make2DPointsDescribe(const QVector<QPointF>& points,uint sequenceID) override;
    //组包
    static QByteArray makePackage(uint sequenceID,const QByteArray& datas);
};

#endif // SAXMLPROTOCOLMAKER_H