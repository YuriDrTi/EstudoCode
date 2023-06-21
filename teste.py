def get_dataset(y,labels):
    if type(y[0])==list:
        dataset=[]
        for i in range(len(y)):
            dataset.append({
            'label':labes[i],
            'data':y[i]
        })
        return dataset
    else:
        return[
            {
                'label':labes[i],
                'data':y[i]
            }
        ]

det set_title(title=''):
   if title !='':
       display='true'
    else:
        display='false'
    return{
        'title':kind,
        'display':display
    }

def create_chart(x,y,labels,kind='bar',title=''):
    dataset = get_dataset(y,labels)
    Options = set_title(title)

    char = {
        'type':kind,
        'data':{
            'labels':x,
            'data':datasets
        },
        'Options':opitions
    }
    return chart

def get_api_chart(chart):
    ulr_base ='http://quickchart.io/chart'
    resp=r.get('f'(url_base)'?c='{str(chart)})
    return resp.content

def save_image(path,content):
    with open(path,'wb')as image:
        image.write(content)

from os import link
from sys import displayhook
from typing import Text
from pil import Image
from IPython.display import display

def display_image(path):
    img_pil=Image.open(path)
    display(img_pil)

y_data_1=[]
for obs in final_data[1:10]:
    y_data_1.append(obs[RECUPERADOS])
labes=['confirmado','recuperados']

x=[]
for obs in final_data[1:10]:
    x.append(obs[DATA].strftime('%d/%m/%y'))
chart=create_chart(x,[y_data_1,y_data_2],labels, title='grafico')
chart_content = get_api_char(chart)
save_image('grafico_1',chart_content)
display_image('grafico_1')

from urllib.parse import quote#QRcode função
def get_api_qrcode(link):
    text=quote(link)
    url_base='http://quickchart.io/qr'
    resp=r.get('f'{url_base}'?texte='{Text})
    return resp.content

ulr_base ='http://quickchart.io/chart'
link='f'(url_base)'?c='{str(chart)}
save_image('qr-code.png',get_api_qrcode(link))
display_image('qr-code.png')