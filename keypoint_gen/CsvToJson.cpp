#include <string>

#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/stringbuffer.h"
#include "rapidjson/prettywriter.h" 

using namespace rapidjson;

#include "CsvToJson.h"

std::string& rename_label_22(const std::string& label)
{
    std::string label_kor = "";

    if (label.compare("leftEar") == 0)
        label_kor.append("���� ��");
    else if (label.compare("leftEye") == 0)
        label_kor.append("���� ��");
    else if (label.compare("nose") == 0)
        label_kor.append("��");
    else if (label.compare("rightEye") == 0)
        label_kor.append("������ ��");
    else if (label.compare("rightEar") == 0)
        label_kor.append("������ ��");

    else if (label.compare("leftHand") == 0)
        label_kor.append("���� �ո�");
    else if (label.compare("leftElbow") == 0)
        label_kor.append("���� �Ȳ�ġ");
    else if (label.compare("leftShoulder") == 0)
        label_kor.append("���� ���");
    else if (label.compare("sternum") == 0)
        label_kor.append("��");
    else if (label.compare("rightShoulder") == 0)
        label_kor.append("������ ���");

    else if (label.compare("rightElbow") == 0)
        label_kor.append("������ �Ȳ�ġ");
    else if (label.compare("rightHand") == 0)
        label_kor.append("������ �ո�");
    else if (label.compare("leftThigh") == 0)
        label_kor.append("���� ������");
    else if (label.compare("leftKnee") == 0)
        label_kor.append("���� ����");
    else if (label.compare("leftFoot") == 0)
        label_kor.append("���� �߸�");

    else if (label.compare("LBigToe") == 0)
        label_kor.append("���� �����߰���");
    else if (label.compare("LHeel") == 0)
        label_kor.append("���� �ߵ޲�ġ");
    else if (label.compare("rightThigh") == 0)
        label_kor.append("������ ������");
    else if (label.compare("rightKnee") == 0)
        label_kor.append("������ ����");
    else if (label.compare("rightFoot") == 0)
        label_kor.append("������ �߸�");

    else if (label.compare("RBigToe") == 0)
        label_kor.append("������ �����߰���");
    else if (label.compare("RHeel") == 0)
        label_kor.append("������ �ߵ޲�ġ");

	return label_kor;
}

std::string& rename_label_30(const std::string& label)
{
    std::string label_kor = "";

    if (label.compare("RightFootEE") == 0)
        label_kor.append("������ �� ��");
    else if (label.compare("RightToeBase") == 0)
        label_kor.append("������ �߰��� ������");
    else if (label.compare("RightFoot") == 0)
        label_kor.append("������ �߸�");
    else if (label.compare("RightLeg") == 0)
        label_kor.append("������ ����");
    else if (label.compare("RightUpLeg") == 0)
        label_kor.append("������ ������");

    else if (label.compare("LeftFootEE") == 0)
        label_kor.append("���� �� ��");
    else if (label.compare("LeftToeBase") == 0)
        label_kor.append("���� �߰��� ������");
    else if (label.compare("LeftFoot") == 0)
        label_kor.append("���� �߸�");
    else if (label.compare("LeftLeg") == 0)
        label_kor.append("���� ����");
    else if (label.compare("LeftUpLeg") == 0)
        label_kor.append("���� ������");

    else if (label.compare("RightHandEE") == 0)
        label_kor.append("������ �հ��� ������");
    else if (label.compare("RightHand") == 0)
        label_kor.append("������ �ո�");
    else if (label.compare("RightForeArm") == 0)
        label_kor.append("������ �Ȳ�ġ");
    else if (label.compare("RightArm") == 0)
        label_kor.append("������ ���");
    else if (label.compare("RightShoulder") == 0)
        label_kor.append("������ ���");

    else if (label.compare("LeftHandEE") == 0)
        label_kor.append("���� �հ��� ������");
    else if (label.compare("LeftHand") == 0)
        label_kor.append("���� �ո�");
    else if (label.compare("LeftForeArm") == 0)
        label_kor.append("���� �Ȳ�ġ");
    else if (label.compare("LeftArm") == 0)
        label_kor.append("���� ���");
    else if (label.compare("LeftShoulder") == 0)
        label_kor.append("���� ���");

    else if (label.compare("HeadEE") == 0)
        label_kor.append("������");
    else if (label.compare("Head") == 0)
        label_kor.append("�Ӹ�");
    else if (label.compare("Neck") == 0)
        label_kor.append("��");
    else if (label.compare("Spine4") == 0)
        label_kor.append("ô��4");
    else if (label.compare("Spine3") == 0)
        label_kor.append("ô��3");

    else if (label.compare("Spine2") == 0)
        label_kor.append("ô��2");
    else if (label.compare("Spine1") == 0)
        label_kor.append("ô��1");
    else if (label.compare("Spine") == 0)
        label_kor.append("ô��0");
    else if (label.compare("Hips") == 0)
        label_kor.append("������");
    else if (label.compare("Nose") == 0)
        label_kor.append("��");

   return label_kor;
}

bool csvToJson(
    const std::string& csvFilePath,
    const std::string& jsonFilePath,
    const std::string& label_kor,
    int NoOfPoint, int width, int length) 
{
	return true;
}


CsvToJson::CsvToJson()
{
    m_pdoc = NULL;
    m_paryAnnotation = NULL;
    create();
}

CsvToJson::~CsvToJson()
{
    distory();
}

void CsvToJson::create(void)
{
    if (m_pdoc != NULL)
        distory();

    m_pdoc = new Document(kObjectType);
    m_allocator = m_pdoc->GetAllocator();

    m_paryAnnotation = new Value(kArrayType);

}

void CsvToJson::distory(void)
{
    if(m_pdoc!=NULL){
        delete m_pdoc;
        m_pdoc = NULL;
    }

    if (m_paryAnnotation != NULL) {
        delete m_paryAnnotation;
        m_paryAnnotation = NULL;
    }
    
}

std::string CsvToJson::JsonDocToString(const Document& doc, bool isPretty = false)
{
    StringBuffer buffer;
    if (isPretty)
    {
        PrettyWriter<StringBuffer> writer(buffer);
        doc.Accept(writer);
    }
    else
    {
        Writer<StringBuffer> writer(buffer);
        doc.Accept(writer);
    }
    return buffer.GetString();
}

void CsvToJson::AddAnnotation(const std::string lable)
{
    Value pose(kObjectType);
    {
        Value location(kObjectType);
        {
            //for 30 or 22
            Value object(kObjectType);
            {
                int x = 0;
                int y = 0;
                object.AddMember("x", x, m_allocator);
                object.AddMember("y", y, m_allocator);
                object.AddMember("view", 10, m_allocator);
            }
            location.AddMember("������ �� ��", object, m_allocator);

        }

        pose.AddMember("location", location, m_allocator);
        pose.AddMember("label", lable, m_allocator);
        pose.AddMember("pose", "pose", m_allocator);
    }
    m_paryAnnotation->AddMember("pose", pose, m_allocator);
    m_paryAnnotation->AddMember("annotation", *m_paryAnnotation, m_allocator);
}

void CsvToJson::AddPose()
{


    //write json
    rapidjson::Document document;
    document.SetObject();
    rapidjson::Document::AllocatorType& allocator = document.GetAllocator();

    rapidjson::Value array(rapidjson::kArrayType);

    for (int i = 0; i < 10; i++)
    {
        rapidjson::Value object(rapidjson::kObjectType);
        object.AddMember("id", 1, allocator);
        object.AddMember("name", "test", allocator);
        object.AddMember("version", 1.01, allocator);
        object.AddMember("vip", true, allocator);

        object.SetInt(i);
        array.PushBack(object, allocator);
    }

    document.AddMember("title", "PLAYER INFO", allocator);
    document.AddMember("players", array, allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    document.Accept(writer);
    auto out = buffer.GetString();


    Document::AllocatorType& allocator = m_pdoc->GetAllocator();
    m_pdoc->AddMember("project", "rapidjson", allocator);
    m_pdoc->AddMember("stars", 10, allocator);


    std::string jsonString = JsonDocToString(*m_pdoc, true);
    printf(jsonString.c_str());
}
